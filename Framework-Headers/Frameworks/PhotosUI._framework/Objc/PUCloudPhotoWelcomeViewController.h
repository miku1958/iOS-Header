//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUWelcomeViewController.h>

#import <PhotosUI/AAUIGenericTermsRemoteUIDelegate-Protocol.h>
#import <PhotosUI/PSCloudStorageOffersManagerDelegate-Protocol.h>
#import <PhotosUI/PUCloudPhotoWelcomeNavigationControllerDismissDelegate-Protocol.h>
#import <PhotosUI/PUCloudPhotoWelcomeViewDelegate-Protocol.h>

@class AAUIGenericTermsRemoteUI, NSString, PSCloudStorageOffersManager, PUCloudPhotoWelcomeView;

@interface PUCloudPhotoWelcomeViewController : PUWelcomeViewController <PUCloudPhotoWelcomeViewDelegate, PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PUCloudPhotoWelcomeNavigationControllerDismissDelegate>
{
    PSCloudStorageOffersManager *_offersManager;
    AAUIGenericTermsRemoteUI *_termsManager;
    BOOL _requireStorageUpgrade;
    BOOL _enableOnAppear;
    PUCloudPhotoWelcomeView *_welcomeView;
    CDUnknownBlockType __completionHandler;
}

@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUCloudPhotoWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;

+ (BOOL)_isPhotoStreamEnabled;
+ (void)_showWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetLastPresentationInfo;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_dismiss;
- (void)_enableButtons;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_handleEnableError:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_presentStoragePurchaseController;
- (void)_updateCurrentActivity;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)navigationControllerDidDismissViewController:(id)arg1;
- (struct CGSize)preferredContentSize;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

