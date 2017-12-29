protocol_src = ['electraserver.cpp']

jsonrpcstub_prog = find_program('jsonrpcstub')

gen_src = custom_target('gen-protocol-stubs',
                        input : ['electra_protocol.json'],
                        output : ['electraabstractserver.h', 'electraclient.h'],
                        command : [jsonrpcstub_prog, '@INPUT@',
                                   '--cpp-server=ElectraAbstractServer',
                                   '--cpp-server-file=@OUTPUT0@',
                                   '--cpp-client=ElectraClient',
                                   '--cpp-client-file=@OUTPUT1@'])

protocol_lib = static_library('protocol',
                        sources : [protocol_src, gen_src])
