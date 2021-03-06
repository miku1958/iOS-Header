//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>
#import <TVMLKit/UIApplicationDelegate-Protocol.h>

@class BKSProcessAssertion, IKURLBagCache, NSDictionary, NSString, NSURL, TVApplicationController, TVStoreApplicationSetupHelper, UIWindow;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>
{
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BKSProcessAssertion *_launchAssertion;
    BOOL _shouldTerminateOnEnterBackground;
    BOOL _headLess;
    BOOL _overrideOrientation;
    UIWindow *_window;
    TVApplicationController *_appController;
    IKURLBagCache *_bagCache;
}

@property (readonly, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property (readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIdleModeVisualEffects;
@property (strong, nonatomic) UIWindow *window; // @synthesize window=_window;

- (void).cxx_destruct;
- (id)_bagBootURL;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_launchApp;
- (void)_loadWithBootURL:(id)arg1;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (id)appLocalBootURL;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)bagBootURLKey;
- (id)bootURL;
- (id)cachedBagPath;
- (void)dealloc;
- (void)didShowViewController;
- (id)init;
- (id)offlineJSURL;
- (void)reload;
- (void)setupWithBootURL:(id)arg1;
- (BOOL)shouldBeForcedLeftToRight;
- (void)updateIdleModeVisualEffectsStatus:(BOOL)arg1;

@end

