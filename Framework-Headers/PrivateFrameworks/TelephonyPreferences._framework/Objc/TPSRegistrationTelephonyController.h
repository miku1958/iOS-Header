//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSTelephonyController.h>

#import <TelephonyPreferences/CoreTelephonyClientRegistrationDelegate-Protocol.h>

@class CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSArray, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate>
{
    NSArray *_networks;
    CTNetworkSelectionInfo *_networkSelectionInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo; // @synthesize networkSelectionInfo=_networkSelectionInfo;
@property (copy, nonatomic) NSArray *networks; // @synthesize networks=_networks;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)automaticallySelectNetwork;
- (void)automaticallySelectNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyNetworkSelectionInfo;
- (void)fetchNetworkList;
- (void)fetchNetworkListWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)networkListAvailable:(id)arg1 list:(id)arg2;
- (void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3;
- (void)networksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performDelegateSelector:(SEL)arg1;
- (void)selectNetwork:(id)arg1;
- (void)selectNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
