//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@class NSObject, NSString, PKPaymentSetupProduct;
@protocol OS_dispatch_group;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController
{
    BOOL _termsAccepted;
    NSObject<OS_dispatch_group> *_nextScreenGroup;
    NSString *_titleText;
    NSString *_subtitleText;
    PKPaymentSetupProduct *_product;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;

+ (BOOL)readerModeProvisioningIsSupported;
- (void).cxx_destruct;
- (void)_downloadCardArtIfNecessary:(CDUnknownBlockType)arg1;
- (void)_prepareForProvisioningViewController;
- (void)_pushReaderModeProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showTerms;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)footerView;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end

