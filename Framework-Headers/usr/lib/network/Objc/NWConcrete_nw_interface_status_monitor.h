//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_interface_status_monitor-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_channel, OS_nw_interface;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor>
{
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_channel> *channel;
    CDUnknownBlockType packet_handler;
    NSObject<OS_dispatch_queue> *packet_handler_queue;
    CDUnknownBlockType update_handler;
    NSObject<OS_dispatch_queue> *update_handler_queue;
    void *channel_event_source;
    void *interface_advisory_source;
    unsigned int cancelled:1;
    unsigned int __pad_bits:7;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
