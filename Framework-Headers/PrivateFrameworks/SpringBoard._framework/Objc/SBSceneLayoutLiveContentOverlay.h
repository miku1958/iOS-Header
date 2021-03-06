//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSMutableDictionary, NSString, SBFHomeGrabberSettings, SBMainDisplaySceneLayoutViewController, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSceneLayoutLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>
{
    BOOL _wantsMinificationFilter;
    BOOL _asynchronousRenderingTemporarilyDisabled;
    long long _containerOrientation;
    long long _rasterizationStyle;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBWindowSelfHostWrapper *_sceneLayoutWindowHostWrapper;
    SBOrientationTransformWrapperView *_sceneLayoutOrientationWrapperView;
    SBFHomeGrabberSettings *_grabberSettings;
    NSMutableDictionary *_statusBarAssertions;
}

@property (readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled; // @synthesize asynchronousRenderingTemporarilyDisabled=_asynchronousRenderingTemporarilyDisabled;
@property (nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBFHomeGrabberSettings *grabberSettings; // @synthesize grabberSettings=_grabberSettings;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long rasterizationStyle; // @synthesize rasterizationStyle=_rasterizationStyle;
@property (readonly, nonatomic) SBOrientationTransformWrapperView *sceneLayoutOrientationWrapperView; // @synthesize sceneLayoutOrientationWrapperView=_sceneLayoutOrientationWrapperView;
@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property (readonly, nonatomic) SBWindowSelfHostWrapper *sceneLayoutWindowHostWrapper; // @synthesize sceneLayoutWindowHostWrapper=_sceneLayoutWindowHostWrapper;
@property (strong, nonatomic) NSMutableDictionary *statusBarAssertions; // @synthesize statusBarAssertions=_statusBarAssertions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsMinificationFilter; // @synthesize wantsMinificationFilter=_wantsMinificationFilter;

- (void).cxx_destruct;
- (void)_evaluateAsynchronousRenderingEnablement;
- (id)_sceneHandleForHardwareButtonEvents;
- (void)dealloc;
- (void)disableAsynchronousRenderingForNextCommit;
- (BOOL)handleHeadsetButtonPress:(BOOL)arg1;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;

@end

