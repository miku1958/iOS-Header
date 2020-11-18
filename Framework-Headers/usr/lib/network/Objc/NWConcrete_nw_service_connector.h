//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_service_connector-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_dictionary, OS_nw_listener, OS_nw_parameters;

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector>
{
    NSObject<OS_nw_listener> *listener;
    unsigned int state;
    NSObject<OS_nw_parameters> *clientParameters;
    NSObject<OS_dispatch_queue> *serviceConnectorQueue;
    unsigned long long serviceConnectorSequenceNumber;
    unsigned short localPortHBO;
    CDUnknownBlockType serviceAvailableBlock;
    NSObject<OS_nw_dictionary> *pendingConnectionRequests;
    NSObject<OS_nw_dictionary> *activeConnections;
    NSObject<OS_nw_dictionary> *activeConnectionRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
