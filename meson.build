project(
  'hello_gtkmm',
  'cpp',
  version : '1.0',
  default_options : ['cpp_std=c++17']
)

gtkmm_dep = dependency('gtkmm-4.0')

# Include directory for headers
inc = include_directories('inc')

# --- AUTOGEN_SRC_START ---
src_files = [
  'src/hello_gtkmm.cpp',
  'src/mywindow.cpp',
]
# --- AUTOGEN_SRC_END ---

# Define executable
executable(
  'hello_gtkmm',
  src_files,
  include_directories: include_directories('inc'),
  dependencies : gtkmm_dep
)

