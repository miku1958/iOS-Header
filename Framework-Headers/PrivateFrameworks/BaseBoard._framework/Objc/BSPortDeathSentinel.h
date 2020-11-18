//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>

@class BSMachPortSendRight, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable>
{
    BSMachPortSendRight *_sendRight;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_source;
    BOOL _activated;
    BOOL _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_callOutQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @dynamic valid;

+ (id)_callOutQueue;
+ (void)monitorSendRight:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)activateWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSendRight:(id)arg1;
- (void)invalidate;

@end
