//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <system_network/OS_nw_path-Protocol.h>

@class NSString;
@protocol OS_nw_array, OS_nw_browse_descriptor, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters, OS_xpc_object;

@interface NWConcrete_nw_path : NSObject <OS_nw_path>
{
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *flows;
    NSObject<OS_nw_endpoint> *override_local_endpoint;
    NSObject<OS_nw_interface> *override_interface;
    NSObject<OS_nw_interface> *direct;
    NSObject<OS_nw_interface> *delegate;
    NSObject<OS_nw_interface> *fallback_interface;
    NSObject<OS_nw_interface> *connected_interface;
    unsigned char client_id[16];
    unsigned char nexus_instance[16];
    unsigned char fallback_agent[16];
    NSObject<OS_xpc_object> *fallback_agent_domains;
    NSObject<OS_xpc_object> *fallback_agent_types;
    NSObject<OS_nw_array> *dns_servers;
    NSObject<OS_xpc_object> *dns_search_domains;
    NSObject<OS_xpc_object> *network_agent_dictionary;
    NSObject<OS_xpc_object> *proxy_settings;
    NSObject<OS_xpc_object> *asserted_browse_agents;
    NSObject<OS_xpc_object> *stats_regions;
    struct necp_all_stats *flow_stats_area;
    struct ifnet_stats_per_flow *flow_interface_stats;
    void *nexus_key;
    char *reason_description;
    const struct sk_nexusadv *advisory;
    struct nw_path_necp_result policy_result;
    unsigned char tfo_cookie[16];
    unsigned int nexus_key_length;
    unsigned int nexus_flow_index;
    unsigned int effective_mtu;
    unsigned int effective_traffic_class;
    unsigned int nexus_port;
    unsigned int ctl_command_code;
    unsigned int ctl_command_value;
    unsigned int ctl_command_tcp_seq_num;
    int status;
    int reason;
    unsigned char recommended_mss;
    unsigned char tfo_cookie_len;
    unsigned char tfo_flags;
    unsigned int weak_fallback:1;
    unsigned int no_fallback_timer:1;
    unsigned int is_local:1;
    unsigned int is_direct:1;
    unsigned int has_ipv4:1;
    unsigned int has_ipv6:1;
    unsigned int defunct:1;
    unsigned int traffic_mgmt_background:1;
    unsigned int necp_satisfied:1;
    unsigned int viable:1;
    unsigned int override_viable:1;
    unsigned int changed_from_previous:1;
    unsigned int probe_connectivity:1;
    unsigned int ecn_enabled:1;
    unsigned int fast_open_blocked:1;
    unsigned int link_quality_abort:1;
    unsigned int partial_checksum_offload:1;
    unsigned int ctl_command_valid:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

