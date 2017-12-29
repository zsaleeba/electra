electractl_src = [ 'main.cpp' ]
executable('electractl',
	include_directories : includes,
	link_with : protocol_lib,
	dependencies : [ jsoncpp_dep, microhttpd_dep, jsonrpccpp_common_dep, jsonrpccpp_client_dep ],
	sources : electractl_src)
