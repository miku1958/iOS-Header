//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSpringBoardGlue : NSObject
{
}

+ (BOOL)_isSessionLoginSession;
+ (BOOL)_showingBuddyLockScreen;
+ (void)_spotlightWillAppear:(id)arg1;
+ (void)accessibilityInitializeBundle;
+ (int)applicationOrientation;
+ (BOOL)canShowAXInfoPanel;
+ (void)handleOrientationChange;
+ (BOOL)isBuddyRunning;
+ (void)removeVoiceOverInfoPanel:(double)arg1;
+ (void)resetCanShowAXInfoPanel;
+ (id)sharedInstance;
+ (void)toggleVoiceOverInfoPanel;
- (BOOL)_accessibilityAllowShowNotificationGestureOverride;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1;
- (BOOL)isDimmed;
- (BOOL)isUILocked;

@end
