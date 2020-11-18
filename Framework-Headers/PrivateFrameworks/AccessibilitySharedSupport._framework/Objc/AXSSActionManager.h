//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSSActionManager : NSObject
{
}

- (void)activateAccessibilityShortcut;
- (void)activateSOS;
- (void)activateSiri;
- (void)activateTypeahead;
- (void)armApplePay;
- (void)beginPinchIn;
- (void)beginPinchOut;
- (void)beginRotateLeft;
- (void)beginRotateRight;
- (void)beginSwipeDown;
- (void)beginSwipeLeft;
- (void)beginSwipeRight;
- (void)beginSwipeUp;
- (void)beginTwoFingerSwipeDown;
- (void)beginTwoFingerSwipeLeft;
- (void)beginTwoFingerSwipeRight;
- (void)beginTwoFingerSwipeUp;
- (void)didPerformStandardCommandWithIdentifier:(id)arg1;
- (void)endPinch;
- (void)endRotate;
- (void)endSwipe;
- (void)endTwoFingerSwipe;
- (void)enterContainer;
- (void)exitContainer;
- (void)goHome;
- (void)goToFirstElement;
- (void)goToLastElement;
- (void)goToNextElementOfType:(unsigned long long)arg1;
- (void)goToNextSection;
- (void)goToPreviousElementOfType:(unsigned long long)arg1;
- (void)goToPreviousSection;
- (void)handleCommand:(id)arg1;
- (BOOL)isInteractive;
- (void)lift;
- (void)lockScreen;
- (void)moveDown;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (void)openContextualMenu;
- (void)performDefaultAction;
- (void)performEscape;
- (void)performSysdiagnose;
- (void)press;
- (void)rebootDevice;
- (void)rotateDevice;
- (void)showAccessibilityActions;
- (void)switchToNextProcess;
- (void)switchToPreviousProcess;
- (void)toggleAppSwitcher;
- (void)toggleControlCenter;
- (void)toggleGesturesMode;
- (void)toggleHelp;
- (void)toggleNotificationCenter;
- (void)twoFingerLift;
- (void)twoFingerPress;
- (void)willPerformStandardCommandWithIdentifier:(id)arg1;

@end
