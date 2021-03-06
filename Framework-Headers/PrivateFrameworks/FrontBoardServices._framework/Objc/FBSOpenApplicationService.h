//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)new;
+ (id)serviceName;
+ (id)serviceWithDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteTarget;
- (BOOL)canOpenApplication:(id)arg1 reason:(long long *)arg2;
- (void)dealloc;
- (id)init;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

