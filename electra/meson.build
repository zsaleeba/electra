electra_src = [ 'main.cpp' ]
executable('electra', 
	include_directories : includes,
	link_with : protocol_lib,
	dependencies : [ jsoncpp_dep, microhttpd_dep, jsonrpccpp_common_dep, jsonrpccpp_server_dep ],
	sources : electra_src)
