//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

@interface NSXPCListener : NSObject
{
    void *_xconnection;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *reserved0;
    id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, strong) NSXPCListenerEndpoint *endpoint;

+ (id)_UUID;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)serviceListener;
- (id)_initShared;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (id)_xpcConnection;
- (void)dealloc;
- (id)description;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)serviceName;
- (void)setOptions:(unsigned long long)arg1;
- (void)stop;
- (void)suspend;

@end

