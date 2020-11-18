//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/FCPaidAccessCheckerType-Protocol.h>

@protocol FCBundleSubscriptionProviderType, FCPurchaseProviderType;

@interface NTPaidAccessChecker : NSObject <FCPaidAccessCheckerType>
{
    id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
    id<FCPurchaseProviderType> _purchaseProvider;
}

@property (readonly, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; // @synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider;
@property (readonly, nonatomic) id<FCPurchaseProviderType> purchaseProvider; // @synthesize purchaseProvider=_purchaseProvider;

- (void).cxx_destruct;
- (BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3;
- (BOOL)canGetBundleSubscriptionToChannel:(id)arg1;
- (BOOL)canGetSubscriptionToChannel:(id)arg1;
- (id)init;
- (id)initWithBundleSubscriptionProvider:(id)arg1 purchaseProvider:(id)arg2;
- (BOOL)isPreparedForUse;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;

@end

