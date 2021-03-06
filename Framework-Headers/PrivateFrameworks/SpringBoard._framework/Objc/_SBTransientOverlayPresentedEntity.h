//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFluidDismissalState, SBPresentationObservationToken, SBTransientOverlayBackgroundWindow, SBTransientOverlayViewController, SBTransientOverlayWindow;
@protocol BSInvalidatable;

@interface _SBTransientOverlayPresentedEntity : NSObject
{
    BOOL _rotating;
    BOOL _dismissing;
    BOOL _hasFinishedWindowInitialization;
    BOOL _hasPreservedInputViews;
    double _baseWindowLevel;
    SBTransientOverlayViewController *_viewController;
    SBTransientOverlayBackgroundWindow *_backgroundWindow;
    SBTransientOverlayWindow *_window;
    id<BSInvalidatable> _disableAutoUnlockAssertion;
    id<BSInvalidatable> _proximityEnabledAssertion;
    id<BSInvalidatable> _wallpaperAnimationSuspensionAssertion;
    SBFluidDismissalState *_fluidDismissalState;
    SBPresentationObservationToken *_bannerLongLookPresentationObservationToken;
    id<BSInvalidatable> _bannerLongLookWindowLevelAssertion;
    SBPresentationObservationToken *_controlCenterPresentationObservationToken;
    id<BSInvalidatable> _controlCenterWindowLevelAssertion;
    SBPresentationObservationToken *_siriPresentationObservationToken;
    id<BSInvalidatable> _siriWindowLevelAssertion;
}

@property (strong, nonatomic) SBTransientOverlayBackgroundWindow *backgroundWindow; // @synthesize backgroundWindow=_backgroundWindow;
@property (strong, nonatomic) SBPresentationObservationToken *bannerLongLookPresentationObservationToken; // @synthesize bannerLongLookPresentationObservationToken=_bannerLongLookPresentationObservationToken;
@property (strong, nonatomic) id<BSInvalidatable> bannerLongLookWindowLevelAssertion; // @synthesize bannerLongLookWindowLevelAssertion=_bannerLongLookWindowLevelAssertion;
@property (readonly, nonatomic) double baseWindowLevel; // @synthesize baseWindowLevel=_baseWindowLevel;
@property (strong, nonatomic) SBPresentationObservationToken *controlCenterPresentationObservationToken; // @synthesize controlCenterPresentationObservationToken=_controlCenterPresentationObservationToken;
@property (strong, nonatomic) id<BSInvalidatable> controlCenterWindowLevelAssertion; // @synthesize controlCenterWindowLevelAssertion=_controlCenterWindowLevelAssertion;
@property (strong, nonatomic) id<BSInvalidatable> disableAutoUnlockAssertion; // @synthesize disableAutoUnlockAssertion=_disableAutoUnlockAssertion;
@property (nonatomic, getter=isDismissing) BOOL dismissing; // @synthesize dismissing=_dismissing;
@property (strong, nonatomic) SBFluidDismissalState *fluidDismissalState; // @synthesize fluidDismissalState=_fluidDismissalState;
@property (nonatomic) BOOL hasFinishedWindowInitialization; // @synthesize hasFinishedWindowInitialization=_hasFinishedWindowInitialization;
@property (nonatomic) BOOL hasPreservedInputViews; // @synthesize hasPreservedInputViews=_hasPreservedInputViews;
@property (strong, nonatomic) id<BSInvalidatable> proximityEnabledAssertion; // @synthesize proximityEnabledAssertion=_proximityEnabledAssertion;
@property (nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property (strong, nonatomic) SBPresentationObservationToken *siriPresentationObservationToken; // @synthesize siriPresentationObservationToken=_siriPresentationObservationToken;
@property (strong, nonatomic) id<BSInvalidatable> siriWindowLevelAssertion; // @synthesize siriWindowLevelAssertion=_siriWindowLevelAssertion;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
@property (strong, nonatomic) id<BSInvalidatable> wallpaperAnimationSuspensionAssertion; // @synthesize wallpaperAnimationSuspensionAssertion=_wallpaperAnimationSuspensionAssertion;
@property (readonly, nonatomic) SBTransientOverlayWindow *window; // @synthesize window=_window;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 window:(id)arg2 baseWindowLevel:(double)arg3;

@end

