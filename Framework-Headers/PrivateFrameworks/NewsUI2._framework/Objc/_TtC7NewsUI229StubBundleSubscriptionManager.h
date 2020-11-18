//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class FCBundleSubscription, MISSING_TYPE;
@protocol FCEntitlementsOverrideProviderType;

@interface _TtC7NewsUI229StubBundleSubscriptionManager : _TtCs12_SwiftObject
{
    MISSING_TYPE *cachedSubscription;
    MISSING_TYPE *bundleSubscription;
    MISSING_TYPE *entitlementsOverrideProvider;
}

@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription; // @synthesize bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription; // @synthesize cachedSubscription;
@property (nonatomic, strong) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @synthesize entitlementsOverrideProvider;

- (void)addObserver:(id)arg1;
- (id)bundleSubscriptionLookupEntry;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)silentExpireBundleSubscription;

@end
