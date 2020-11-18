//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDAppLauncher : NSObject <HDProcessStateObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_clientByBundleIdentifier;
    HDDaemon *_daemon;
}

@property (strong, nonatomic) NSMutableDictionary *clientByBundleIdentifier; // @synthesize clientByBundleIdentifier=_clientByBundleIdentifier;
@property (weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_attemptRelaunchClient:(id)arg1 forSeconds:(double)arg2 retries:(int)arg3;
- (void)_queue_cleanUpClients;
- (id)initWithDaemon:(id)arg1;
- (void)processTerminated:(id)arg1;
- (void)registerIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
