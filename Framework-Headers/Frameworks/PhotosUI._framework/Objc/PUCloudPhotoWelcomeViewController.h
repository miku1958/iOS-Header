//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/AAUIGenericTermsRemoteUIDelegate-Protocol.h>
#import <PhotosUI/PSCloudStorageOffersManagerDelegate-Protocol.h>
#import <PhotosUI/PUCloudPhotoWelcomeViewDelegate-Protocol.h>

@class AAUIGenericTermsRemoteUI, NSString, PSCloudStorageOffersManager, PUCloudPhotoWelcomeView, UIBarButtonItem;

@interface PUCloudPhotoWelcomeViewController : UIViewController <PUCloudPhotoWelcomeViewDelegate, PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate>
{
    PSCloudStorageOffersManager *_offersManager;
    AAUIGenericTermsRemoteUI *_termsManager;
    BOOL _requireStorageUpgrade;
    BOOL _enableOnAppear;
    PUCloudPhotoWelcomeView *_welcomeView;
    UIBarButtonItem *_skipBarButtonItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIBarButtonItem *skipBarButtonItem; // @synthesize skipBarButtonItem=_skipBarButtonItem;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUCloudPhotoWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;

+ (BOOL)_isPhotoStreamEnabled;
+ (void)showIfNecessaryWithPresentingViewController:(id)arg1;
+ (void)showWithPresentingViewController:(id)arg1;
- (void).cxx_destruct;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_dismiss;
- (void)_enableButtons;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_handleEnableError:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_presentStoragePurchaseController;
- (void)_skipButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (struct CGSize)preferredContentSize;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

