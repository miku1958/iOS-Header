//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessMonitorObserverConnection-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection>
{
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

