//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXSimpleRuntimeManager;

@interface AXBAccessibilityManager : NSObject
{
    BOOL _voiceOverItemChooserVisible;
    AXSimpleRuntimeManager *_runtimeManager;
    BOOL _accelerometerDisabled;
}

@property (nonatomic) BOOL accelerometerDisabled; // @synthesize accelerometerDisabled=_accelerometerDisabled;
@property (nonatomic) BOOL voiceOverItemChooserVisible; // @synthesize voiceOverItemChooserVisible=_voiceOverItemChooserVisible;

+ (void)initializeAccessibilityMonitor;
+ (id)sharedManager;
+ (void)updateAccessibilitySettings;
- (void).cxx_destruct;
- (int)_accessibilityApplicationForContextId:(unsigned int)arg1;
- (id)_accessibilityAssistiveTouchApplication;
- (struct CGPoint)_accessibilityConvertHostedViewPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (BOOL)_accessibilityDisplayRequiresRotateForPoints:(id)arg1;
- (BOOL)_accessibilityEventTapCallback:(id)arg1;
- (BOOL)_accessibilityIsInternalInstall;
- (void)_accessibilityRepostEvent:(id)arg1;
- (id)_accessibilitySpringBoardApplication;
- (id)_accessibilitySystemApp;
- (id)_accessibilitySystemAppApplicationBundleId;
- (id)_accessibilitySystemAppApplicationPid;
- (id)_accessibilityUIServerApplication;
- (struct CGPoint)_accessibilityViewPointFromHostedViewContext:(struct CGPoint)arg1 displayId:(unsigned int)arg2;
- (id)_commonEventRepForTouchEventWithType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 flags:(unsigned int)arg4 contextId:(unsigned int)arg5;
- (BOOL)_handleItemChooserVisible:(unsigned int)arg1;
- (int)_handlePidForSpecialCases:(unsigned int)arg1;
- (double)_processPassiveEventQueue;
- (void)_releasePendingEvents:(double)arg1;
- (BOOL)_screenReaderCapture:(id)arg1;
- (void)_sendCancelTouchEvent;
- (void)_sendDeviceChangeEvent:(int)arg1;
- (void)_sendEventRep:(id)arg1;
- (void)_sendFingerEvent:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 flags:(unsigned int)arg4 contextId:(unsigned int)arg5;
- (void)_sendPressFingerEvent:(BOOL)arg1 location:(struct CGPoint)arg2 force:(double)arg3 flags:(unsigned int)arg4 contextId:(unsigned int)arg5;
- (void)_sendStylusEvent:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 flags:(unsigned int)arg6 contextId:(unsigned int)arg7;
- (void)_setDeviceOrientationCapability:(BOOL)arg1;
- (void)_startPassiveResendThread;
- (void)_undoContextShiftedPoints:(id)arg1;
- (void)_userEventOccurred;
- (id)accessibilityAttributeValue:(int)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (struct CGRect)accessibilityConvertHostedViewFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (struct CGRect)accessibilityConvertHostedViewFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (struct CGPoint)accessibilityConvertHostedViewPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2 displayId:(unsigned int)arg3;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (id)allJobLabels;
- (void)disableAccessibility;
- (id)init;
- (void)initializeAccessibility;
- (void)observerClientDied;
- (void)resetAccessibilityUIHitPort;
- (void)resetAssistiveTouchHitPort;
- (void)simulatePressAtPoint:(struct CGPoint)arg1 withContextId:(unsigned int)arg2 withDelay:(float)arg3 withForce:(double)arg4;
- (id)windowServerDisplayForDisplayId:(unsigned int)arg1;

@end

