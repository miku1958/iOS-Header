//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ZoomServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSMutableArray, NSMutableDictionary, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate>
{
    NSMutableArray *_zoomListeners;
    NSMutableDictionary *_zoomAttributeListeners;
    BOOL _showingZoomLens;
    BOOL _springBoardReady;
    BOOL _triedToShowLensBeofreSBReady;
    BOOL _registeredForZoomListener;
    BOOL _registeredForZoomAttributeListeners;
    BOOL _shouldRegisterForZoomListeners;
    AXUIClient *_zoomWindowClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL registeredForZoomAttributeListeners; // @synthesize registeredForZoomAttributeListeners=_registeredForZoomAttributeListeners;
@property (nonatomic) BOOL registeredForZoomListener; // @synthesize registeredForZoomListener=_registeredForZoomListener;
@property (nonatomic) BOOL shouldRegisterForZoomListeners; // @synthesize shouldRegisterForZoomListeners=_shouldRegisterForZoomListeners;
@property (readonly, nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens;
@property (nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens; // @synthesize showingZoomLens=_showingZoomLens;
@property (nonatomic) BOOL springBoardReady; // @synthesize springBoardReady=_springBoardReady;
@property (readonly) Class superclass;
@property (nonatomic) BOOL triedToShowLensBeofreSBReady; // @synthesize triedToShowLensBeofreSBReady=_triedToShowLensBeofreSBReady;
@property (nonatomic) double zoomLevel;
@property (strong, nonatomic) AXUIClient *zoomWindowClient; // @synthesize zoomWindowClient=_zoomWindowClient;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_checkSpringBoardStarted;
- (void)_handleChangedAttributes:(id)arg1;
- (BOOL)_isAllowedMagnifierClient;
- (BOOL)_isPrimaryZoomWindowClient;
- (void)_panWithDirection:(id)arg1;
- (void)_zoomChanged:(id)arg1;
- (id)activeZoomMode;
- (double)appActivationAnimationStartDelay;
- (double)appDeactivationAnimationStartDelay;
- (double)appSwitcherRevealAnimationStartDelay;
- (void)autoPanZoomUsingLocation:(struct CGPoint)arg1 withPanningStyle:(unsigned long long)arg2;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)hideZoomLens;
- (BOOL)inStandbyMode;
- (id)init;
- (void)isMagnifierVisibleWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)notifyZoomAppActivationAnimationDidFinish;
- (BOOL)notifyZoomAppActivationAnimationWillBegin;
- (BOOL)notifyZoomAppDeactivationAnimationWillBegin;
- (BOOL)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(struct CGRect)arg2;
- (BOOL)notifyZoomAppDidEnterBackground:(id)arg1;
- (BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
- (BOOL)notifyZoomCarouselLockBegan;
- (BOOL)notifyZoomCarouselLockEnded;
- (BOOL)notifyZoomDeviceWasUnlocked;
- (BOOL)notifyZoomDeviceWillWake;
- (BOOL)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1;
- (BOOL)notifyZoomDragWillEnd;
- (BOOL)notifyZoomDragWillStart;
- (BOOL)notifyZoomFluidSwitcherGestureDidFinish;
- (BOOL)notifyZoomFluidSwitcherGestureDidFinishWithDock;
- (BOOL)notifyZoomFluidSwitcherGestureWillBegin;
- (BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3;
- (BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3 keyboardFrame:(struct CGRect)arg4;
- (BOOL)notifyZoomHomeButtonWasPressed;
- (BOOL)notifyZoomIdleSlugOpacityChangedTo:(double)arg1;
- (BOOL)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg1;
- (BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect)arg1 inAppWithBundleID:(id)arg2;
- (BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1;
- (BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1;
- (BOOL)notifyZoomLockButtonWasPressed;
- (BOOL)notifyZoomReturnedToClockFaceAtIdle;
- (void)notifyZoomSOSMedicalIDShown;
- (BOOL)notifyZoomWillHideBrailleInputUI;
- (BOOL)notifyZoomWillShowBrailleInputUI;
- (void)panDown;
- (void)panLeft;
- (void)panRight;
- (void)panUp;
- (double)reachabilityScaleFactor;
- (id)registerForCoalescedZoomAttributesWithChangedHandler:(CDUnknownBlockType)arg1;
- (id)registerForZoomAttributes:(id)arg1 updatesImmediatelyWithChangedHandler:(CDUnknownBlockType)arg2;
- (void)registerInterestInZoomAttributes;
- (void)removeCoalescedZoomAttributesChangedHandler:(id)arg1;
- (void)removeZoomAttributesChangedHandler:(id)arg1;
- (BOOL)shouldSuppressKeyCommandHUD;
- (void)showMagnifier;
- (void)showZoomLens;
- (void)startMagnifier;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (struct CGRect)zoomFrame;

@end

