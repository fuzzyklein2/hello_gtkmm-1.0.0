project(
  'hello_gtkmm',
  'cpp',
  version : '1.0',
  default_options : ['cpp_std=c++17']
)

gtkmm_dep = dependency('gtkmm-4.0')

executable(
  'hello_gtkmm',
  './src/hello_gtkmm.cpp',
  dependencies : gtkmm_dep
)
