//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosExtras/IKAppContextDelegate-Protocol.h>
#import <VideosExtras/IKAppDeviceConfig-Protocol.h>
#import <VideosExtras/IKApplication-Protocol.h>
#import <VideosExtras/MPVideoOverlayDelegate-Protocol.h>
#import <VideosExtras/UICollectionViewDelegate-Protocol.h>
#import <VideosExtras/UINavigationControllerDelegate-Protocol.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, NSString, UINavigationController, UITraitCollection, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue;

@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate>
{
    NSLayoutConstraint *_bottomConstraint;
    VideosExtrasNavigationController *_navigationController;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    BOOL _didAttemptRestartAfterAppContextFailure;
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;
    VideosExtrasContext *_context;
    VideosExtrasFeatureContainerViewController *_featureContainer;
    IKAppContext *_applicationContext;
    NSArray *_lastSelectedSnapshotViewControllers;
    id<IKAppDataStoring> _localStorage;
    id<IKAppDataStoring> _vendorStorage;
    id<IKAppUserDefaultsStoring> _userDefaultsStorage;
    VideosExtrasArtworkDataSource *_artworkDataSource;
}

@property (strong, nonatomic) IKAppContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property (strong, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property (readonly, weak, nonatomic) VideosExtrasContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // @synthesize featureContainer=_featureContainer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // @synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers;
@property (strong, nonatomic) id<IKAppDataStoring> localStorage; // @synthesize localStorage=_localStorage;
@property (readonly, nonatomic) UIView *mainMenuBar;
@property (strong, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // @synthesize mainTemplateViewController=_mainTemplateViewController;
@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection; // @dynamic overrideTraitCollection;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
@property (strong, nonatomic) id<IKAppDataStoring> vendorStorage; // @synthesize vendorStorage=_vendorStorage;

+ (id)currentController;
- (void).cxx_destruct;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize)arg1;
- (void)_applyMainTemplateOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (BOOL)_areExtrasVisible;
- (void)_attemptRestart;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (void)_finalizeMainTemplateOffset:(BOOL)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (BOOL)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_setUpForApplication;
- (BOOL)_shouldExtrasBeVisibleForViewSize:(struct CGSize)arg1;
- (void)_showExtrasBar:(BOOL)arg1;
- (void)_stopOldContextIfNeeded;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appIdentifier;
- (BOOL)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (BOOL)appUsesDefaultStyleSheets;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)detectMainDocument:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isTimeZoneSet;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)popToFeatureOrMain;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (BOOL)prefersStatusBarHidden;
- (struct CGSize)screenSize;
- (BOOL)shouldAutorotate;
- (BOOL)shouldIgnoreJSValidation;
- (void)start;
- (id)storeFrontCountryCode;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemLanguage;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (id)vendorIdentifier;
- (void)viewDidLoad;
- (id)viewElementRegistry;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

