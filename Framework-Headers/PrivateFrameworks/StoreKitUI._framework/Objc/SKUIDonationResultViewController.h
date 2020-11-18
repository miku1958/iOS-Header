//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIDonationStepViewController.h>

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>
{
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)loadView;

@end
