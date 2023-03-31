(
    enum_decl
        name: (identifier) @name ) @definition.class


(
    struct_decl
        name: (identifier) @name ) @definition.class


(
    function_decl
        name: (identifier) @name) @definition.function

(
    syscall_decl
        name: (identifier) @name) @definition.function
(
    external_func_decl
        name: (identifier) @name) @definition.function
(
    function_call
        fn_call_name: (identifier) @name) @reference.call