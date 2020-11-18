//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_path_parameters-Protocol.h>

@class NSString;
@protocol OS_nw_array, OS_nw_context, OS_nw_endpoint, OS_nw_interface, OS_nw_protocol_options;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_parameters : NSObject <OS_nw_path_parameters>
{
    struct nw_parameters_path_value path_value;
    char *account_id;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_protocol_options> *transport_options;
    NSObject<OS_nw_protocol_options> *internet_options;
    NSObject<OS_nw_endpoint> *local_address;
    NSObject<OS_nw_interface> *required_interface;
    NSObject<OS_nw_array> *transforms;
    struct nw_parameters_extended_objects *extended_objects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
