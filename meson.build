project('electra', 'cpp',
	version : '0.0.1',
	license : 'BSD 2-clause',
    default_options : ['cpp_std=c++14'])

includes = include_directories('protocol')

cc = meson.get_compiler('cpp')
jsoncpp_dep =           cc.find_library('jsoncpp')
microhttpd_dep =        cc.find_library('microhttpd')
jsonrpccpp_common_dep = cc.find_library('jsonrpccpp-common')
jsonrpccpp_server_dep = cc.find_library('jsonrpccpp-server')
jsonrpccpp_client_dep = cc.find_library('jsonrpccpp-client')

subdir('protocol')
subdir('electra')
subdir('electractl')
