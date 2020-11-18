//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIApplicationInfoParser : NSObject
{
    BOOL _isYukonLinked;
    BOOL _isExitsOnSuspend;
    BOOL _canChangeBackgroundStyle;
    BOOL _statusBarHidden;
    BOOL _statusBarHiddenWhenVerticallyCompact;
    BOOL _systemWindowsSecure;
    BOOL _optOutOfRTL;
    BOOL _disableLayoutAwareShortcuts;
    BOOL _requiresHighResolution;
    BOOL _fakingRequiresHighResolution;
    BOOL _supportsMultiwindow;
    BOOL _supportedOnLockScreen;
    int _ignoredOverrides;
    long long _requestedStatusBarStyle;
    long long _interfaceOrientation;
    long long _launchingInterfaceOrientationForSpringBoard;
    unsigned long long _supportedInterfaceOrientations;
    long long _backgroundStyle;
    long long _whitePointAdaptivityStyle;
    unsigned long long _viewControllerBasedStatusBarAppearance;
    NSString *_launchImageFile;
    NSArray *_canvasDefinitions;
    NSDictionary *_sceneConfigurations;
    long long _supportedUserInterfaceStyle;
}

@property (readonly, nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) BOOL canChangeBackgroundStyle; // @synthesize canChangeBackgroundStyle=_canChangeBackgroundStyle;
@property (readonly, copy, nonatomic) NSArray *canvasDefinitions; // @synthesize canvasDefinitions=_canvasDefinitions;
@property (readonly, nonatomic) BOOL disableLayoutAwareShortcuts; // @synthesize disableLayoutAwareShortcuts=_disableLayoutAwareShortcuts;
@property (readonly, nonatomic) BOOL fakingRequiresHighResolution; // @synthesize fakingRequiresHighResolution=_fakingRequiresHighResolution;
@property (readonly, nonatomic) int ignoredOverrides; // @synthesize ignoredOverrides=_ignoredOverrides;
@property (readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (readonly, nonatomic) BOOL isExitsOnSuspend; // @synthesize isExitsOnSuspend=_isExitsOnSuspend;
@property (readonly, copy, nonatomic) NSString *launchImageFile; // @synthesize launchImageFile=_launchImageFile;
@property (readonly, nonatomic) long long launchingInterfaceOrientationForSpringBoard; // @synthesize launchingInterfaceOrientationForSpringBoard=_launchingInterfaceOrientationForSpringBoard;
@property (readonly, nonatomic) BOOL optOutOfRTL; // @synthesize optOutOfRTL=_optOutOfRTL;
@property (readonly, nonatomic) long long requestedStatusBarStyle; // @synthesize requestedStatusBarStyle=_requestedStatusBarStyle;
@property (readonly, nonatomic) BOOL requiresHighResolution; // @synthesize requiresHighResolution=_requiresHighResolution;
@property (readonly, copy, nonatomic) NSDictionary *sceneConfigurations; // @synthesize sceneConfigurations=_sceneConfigurations;
@property (readonly, nonatomic) BOOL statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property (readonly, nonatomic) BOOL statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property (readonly, nonatomic) BOOL supportedOnLockScreen; // @synthesize supportedOnLockScreen=_supportedOnLockScreen;
@property (readonly, nonatomic) long long supportedUserInterfaceStyle; // @synthesize supportedUserInterfaceStyle=_supportedUserInterfaceStyle;
@property (readonly, nonatomic) BOOL supportsMultiwindow; // @synthesize supportsMultiwindow=_supportsMultiwindow;
@property (readonly, nonatomic) BOOL systemWindowsSecure; // @synthesize systemWindowsSecure=_systemWindowsSecure;
@property (readonly, nonatomic) unsigned long long viewControllerBasedStatusBarAppearance; // @synthesize viewControllerBasedStatusBarAppearance=_viewControllerBasedStatusBarAppearance;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;

- (void).cxx_destruct;
- (void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1;
- (void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1;
- (id)_initWithApplicationPlistData:(id)arg1;
- (BOOL)_isLinkedOnOrAfterYukon;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithbundle:(id)arg1;

@end

