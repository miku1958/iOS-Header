//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKAddToWatchOfferViewController.h>

#import <PassKitUI/PKAddToWatchOfferViewControllerDelegate-Protocol.h>

@class NSString, UIView;

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController <PKAddToWatchOfferViewControllerDelegate>
{
    UIView *_interactionDisabledView;
    CDUnknownBlockType _dismissalHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_handleDismissal:(BOOL)arg1;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch:(id)arg1;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(BOOL)arg1;

@end

