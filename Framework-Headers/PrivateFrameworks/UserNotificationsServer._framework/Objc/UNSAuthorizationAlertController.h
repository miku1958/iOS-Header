//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface UNSAuthorizationAlertController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_bundleIdentifersForActiveAlerts;
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;
}

- (void).cxx_destruct;
- (void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_addResultBlock:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)_queue_isAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;
- (void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 withResult:(CDUnknownBlockType)arg3;

@end

