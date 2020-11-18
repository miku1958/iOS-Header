//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKExpressPassController : NSObject
{
    id<PKPaymentDataProvider> _paymentDataProvider;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    BOOL _isForWatch;
    BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
    id _presentingViewController;
    long long _apiVersion;
}

@property (nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property (weak, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;

- (void).cxx_destruct;
- (void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)deviceUsesAutomaticAuthorization;
- (void)disableExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enableExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)expressModeSupportedForPass:(id)arg1;
- (id)expressModeUpgradeRequestForPass:(id)arg1;
- (id)expressState;
- (id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(BOOL)arg3;
- (BOOL)isExpressModeEnabledForPass:(id)arg1;
- (BOOL)supportsLowPowerExpressMode;
- (void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)validExpressModeUpgradeRequestForPass:(id)arg1;

@end
