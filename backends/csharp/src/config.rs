use interoptopus::util::NamespaceMappings;

/// The types to write for the given recorder.
#[derive(Copy, Clone, Debug, Eq, PartialEq)]
pub enum WriteTypes {
    /// Only write items defined in the library for this namespace.
    Namespace,
    /// Write types in this namespace and global interoptopus types (e.g., FFIBool)
    NamespaceAndInteroptopusGlobal,
    /// Write every type in the library, regardless of namespace association.
    All,
}

/// Whether and how `unsafe` in generated C# should be emitted.
#[derive(Copy, Clone, Debug, Eq, PartialEq)]
pub enum Unsafe {
    /// Do not use C# `unsafe`.
    None,
    /// Use `unsafe` for performance optimizations (Unity compatible).
    UnsafeKeyword,
    /// Also use `unsafe` for slice copies.
    UnsafePlatformMemCpy,
}

impl Unsafe {
    pub fn any_unsafe(self) -> bool {
        match self {
            Unsafe::None => false,
            Unsafe::UnsafeKeyword => true,
            Unsafe::UnsafePlatformMemCpy => true,
        }
    }
}

/// Configures C# code generation.
#[derive(Clone, Debug)]
pub struct Config {
    /// The file header, e.g., `// (c) My Company`.
    pub file_header_comment: String,
    /// Static class for Interop methods, e.g., `Interop`.
    pub class: String,
    /// DLL to load, e.g., `my_library`.
    pub dll_name: String,
    /// Maps which namespace id belongs into which FQN (e.g., "common" => "MyCompany.Common").
    pub namespace_mappings: NamespaceMappings,
    /// Namespace ID of _this_ namespace to write (default "").
    pub namespace_id: String,
    /// Whether [`Visibility`](interoptopus::lang::c::Visibility) information should be honored.
    pub emit_rust_visibility: bool,
    /// Whether, say, a `x: [u8; 3]` should become 3 `x0: u8, ...` instead.
    ///
    /// If this is not set, interop generation with arrays in structr will fail. This is a somewhat
    /// open issue w.r.t Unity-sans-unsafe support and feedback would be greatly welcome!
    pub unroll_struct_arrays: bool,
    /// Which types to write.
    pub write_types: WriteTypes,
    /// If enabled bindings will use C# `unsafe` for increased performance; but will need to be enabled in C# project settings to work.
    pub use_unsafe: Unsafe,
    /// Also generate markers for easier debugging
    pub debug: bool,
}

impl Config {}

impl Default for Config {
    fn default() -> Self {
        Self {
            file_header_comment: "// Automatically generated by Interoptopus.".to_string(),
            class: "Interop".to_string(),
            dll_name: "library".to_string(),
            namespace_mappings: NamespaceMappings::new("My.Company"),
            namespace_id: "".to_string(),
            emit_rust_visibility: false,
            unroll_struct_arrays: false,
            write_types: WriteTypes::NamespaceAndInteroptopusGlobal,
            use_unsafe: Unsafe::None,
            debug: false,
        }
    }
}
