//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBBundlePropertiesLSProviderDelegate-Protocol.h>
#import <RunningBoard/RBBundlePropertiesManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSString, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBBundlePropertiesLSProvider, RBProcessIndex;
@protocol RBBundlePropertiesManagerDelegate;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing>
{
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBBundlePropertiesBackgroundRefreshProvider *_bgRefreshProvider;
    RBProcessIndex *_processIndex;
    id<RBBundlePropertiesManagerDelegate> _delegate;
    struct os_unfair_lock_s _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RBBundlePropertiesManagerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2;
- (id)captureState;
- (id)init;
- (id)propertiesForIdentity:(id)arg1 identifier:(id)arg2;
- (void)removeProcess:(id)arg1;

@end
