//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIDonationStepViewController.h>

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class NSString, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidationResponse, SKUIGiftValidator;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>
{
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    BOOL _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_amountChangedNotification:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_donateButtonAction:(id)arg1;
- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_performActionAfterValidation;
- (void)_reenableAfterFailure;
- (void)_setDonationButtonEnabled:(BOOL)arg1;
- (void)_validateDonation:(id)arg1;
- (void)dealloc;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)loadView;

@end

