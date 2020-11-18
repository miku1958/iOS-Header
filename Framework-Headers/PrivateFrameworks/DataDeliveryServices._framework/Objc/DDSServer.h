//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol DDSManaging, OS_dispatch_queue;

@interface DDSServer : NSObject <NSXPCListenerDelegate>
{
    id<DDSManaging> _manager;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_clientConnections;
}

@property (readonly, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (readonly, nonatomic) id<DDSManaging> manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleEndedConnection:(id)arg1;
- (id)init;
- (id)initWithManager:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
