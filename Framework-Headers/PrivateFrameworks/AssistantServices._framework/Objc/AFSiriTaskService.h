//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class AFSiriTaskDeliveryHandler, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    AFSiriTaskDeliveryHandler *_deliveryHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
+ (id)appTaskService;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end

