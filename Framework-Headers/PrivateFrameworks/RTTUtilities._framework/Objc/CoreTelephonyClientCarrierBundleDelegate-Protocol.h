//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RTTUtilities/NSObject-Protocol.h>

@class CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientCarrierBundleDelegate <NSObject>

@optional
- (void)carrierBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)defaultBundleChange;
- (void)operatorBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
@end

