//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSEntitlementJSHandlerDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface TSRemotePlanSignUpFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate>
{
    NSString *_carrierName;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (strong, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;
- (id)firstViewController;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)initWithSubscriptionContext:(id)arg1 carrier:(id)arg2;
- (id)nextViewControllerFrom:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end

