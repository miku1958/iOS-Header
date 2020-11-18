//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ZoomServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSMutableArray, NSString;
@protocol ZoomServicesDelegate;

@interface ZoomServices : NSObject <AXUIClientDelegate>
{
    NSMutableArray *_zoomListeners;
    BOOL _showingZoomLens;
    BOOL _registeredForZoomListener;
    AXUIClient *_zoomWindowClient;
    id<ZoomServicesDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<ZoomServicesDelegate> delegate;
@property (nonatomic) id<ZoomServicesDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL registeredForZoomListener; // @synthesize registeredForZoomListener=_registeredForZoomListener;
@property (readonly, nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens;
@property (nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens; // @synthesize showingZoomLens=_showingZoomLens;
@property (readonly) Class superclass;
@property (strong, nonatomic) AXUIClient *zoomWindowClient; // @synthesize zoomWindowClient=_zoomWindowClient;

+ (id)sharedInstance;
- (void)_handleChangedAttributes:(id)arg1;
- (BOOL)_isPrimaryZoomWindowClient;
- (void)_zoomChanged:(id)arg1;
- (double)appActivationAnimationStartDelay;
- (double)appDeactivationAnimationStartDelay;
- (double)appSwitcherRevealAnimationStartDelay;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)hideZoomLens;
- (id)init;
- (BOOL)notifyZoomAppActivationAnimationDidFinish;
- (BOOL)notifyZoomAppActivationAnimationWillBegin;
- (BOOL)notifyZoomAppDeactivationAnimationWillBegin;
- (BOOL)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(struct CGRect)arg2;
- (BOOL)notifyZoomAppDidEnterBackground:(id)arg1;
- (BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
- (BOOL)notifyZoomDeviceWasUnlocked;
- (BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3;
- (BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3 keyboardFrame:(struct CGRect)arg4;
- (BOOL)notifyZoomHomeButtonWasPressed;
- (BOOL)notifyZoomIdleSlugOpacityChangedTo:(double)arg1;
- (BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect)arg1 inAppWithBundleID:(id)arg2;
- (BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1;
- (BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1;
- (BOOL)notifyZoomLockButtonWasPressed;
- (BOOL)notifyZoomReturnedToClockFaceAtIdle;
- (BOOL)notifyZoomWillHideBrailleInputUI;
- (BOOL)notifyZoomWillShowBrailleInputUI;
- (double)reachabilityScaleFactor;
- (void)registerInterestInZoomAttributes;
- (id)registerZoomLevelChangeHandler:(CDUnknownBlockType)arg1;
- (void)removeZoomLevelHandler:(id)arg1;
- (void)showZoomLens;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (struct CGRect)zoomFrame;
- (double)zoomLevel;

@end

