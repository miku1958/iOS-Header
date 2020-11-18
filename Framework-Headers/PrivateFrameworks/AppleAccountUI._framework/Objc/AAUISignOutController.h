//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <AppleAccountUI/AAUIDataclassPickerViewControllerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary, NSString;
@protocol AAUISignOutControllerDelegate;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate>
{
    ACAccountStore *_accountStore;
    long long _currentStyle;
    NSDictionary *_dataclassOptions;
    ACAccount *_account;
}

@property (strong, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore; // @synthesize _accountStore;
@property (copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions; // @synthesize _dataclassOptions;
@property (readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUISignOutControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct NSDictionary *)_actionableDataclassOptions;
- (id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2;
- (id)_dataclassViewController;
- (void)_delegate_signOutControllerDidCancel;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)_hasHealthData;
- (BOOL)_hasPaymentPasses;
- (BOOL)_hasiCloudDriveData;
- (BOOL)_hasiCloudPhotosData;
- (void)_mainQueue_continueSignOutWithDataclassActions:(struct NSDictionary *)arg1;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(struct NSDictionary *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_signOutMessageSimplified:(BOOL)arg1 withConfirmation:(BOOL)arg2;
- (id)_spinnerViewControllerForActions:(struct NSDictionary *)arg1;
- (void)_updateStyleIfNeeded;
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(struct NSDictionary *)arg2;
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTextForDataclassPickerViewController:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
