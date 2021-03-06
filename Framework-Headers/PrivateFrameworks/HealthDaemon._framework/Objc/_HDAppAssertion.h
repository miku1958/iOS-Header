//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAppAssertionManager, HDProfile, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDAppAssertion : NSObject
{
    BOOL _invalidated;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_pendingDataTypeCodesToAnchors;
    double _lastLaunchAttempt;
    long long _launchErrorCount;
    HDProfile *_profile;
    HDAppAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingLaunchCompletions;
    NSObject<OS_dispatch_source> *_processDeathSource;
    NSMutableSet *_processAssertions;
}

@property (weak, nonatomic) HDAppAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, nonatomic) double lastLaunchAttempt; // @synthesize lastLaunchAttempt=_lastLaunchAttempt;
@property (readonly, nonatomic) long long launchErrorCount; // @synthesize launchErrorCount=_launchErrorCount;
@property (readonly, nonatomic) double nextLaunchAttempt;
@property (readonly, nonatomic) NSMutableDictionary *pendingDataTypeCodesToAnchors; // @synthesize pendingDataTypeCodesToAnchors=_pendingDataTypeCodesToAnchors;
@property (strong, nonatomic) NSMutableDictionary *pendingLaunchCompletions; // @synthesize pendingLaunchCompletions=_pendingLaunchCompletions;
@property (readonly, nonatomic) NSMutableSet *processAssertions; // @synthesize processAssertions=_processAssertions;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *processDeathSource; // @synthesize processDeathSource=_processDeathSource;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_queue_acquireAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_invalidate;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 queue:(id)arg4;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)launchBundleIdentifier;
- (void)launchWithCompletion:(CDUnknownBlockType)arg1;

@end

