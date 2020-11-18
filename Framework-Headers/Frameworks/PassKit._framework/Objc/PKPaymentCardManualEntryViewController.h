//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKPaymentSetupFieldsViewController.h>

#import <PassKit/PKPaymentCameraCaptureViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentSetupBrowseProductsViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentSetupDisambiguationViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentSetupBrowseProductsViewController, PKPaymentSetupFindWithoutNumberFooterView;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate>
{
    PKPaymentSetupFindWithoutNumberFooterView *_findWithoutNumberFooterView;
    PKPaymentSetupBrowseProductsViewController *_findWithoutNumberBrowser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_cameraCaptureCancelButtonPressed:(id)arg1;
- (void)_captureFromCamera:(id)arg1;
- (void)_dismissCameraCaptureViewController:(id)arg1;
- (id)_findWithoutNumberFooterView;
- (void)_performDisambiguationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performInlineSecondaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performSecondaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldUseInlineSecondaryProvisioningFlow;
- (void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraCaptureViewControllerDidFail:(id)arg1;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)disambiguationViewControllerSetupLater:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (void)findCardWithoutNumber:(id)arg1;
- (id)footerView;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)readonlyFieldIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateFieldsModelWithCameraCaptureObjects:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end

