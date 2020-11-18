//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBDisplayLayoutElement, UIApplicationSceneDeactivationAssertion, UIWindow;

@interface SBCoverSheetSceneManager : NSObject
{
    UIWindow *_coverSheetWindow;
    FBDisplayLayoutElement *_displayLayoutElement;
    UIApplicationSceneDeactivationAssertion *_notificationCenterAssertion;
    UIApplicationSceneDeactivationAssertion *_systemAnimationAssertion;
}

@property (weak, nonatomic) UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
@property (strong, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property (strong, nonatomic) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion; // @synthesize notificationCenterAssertion=_notificationCenterAssertion;
@property (strong, nonatomic) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion; // @synthesize systemAnimationAssertion=_systemAnimationAssertion;

- (void).cxx_destruct;
- (void)_setDisplayLayoutElementActive:(BOOL)arg1;
- (void)_setSceneBackgrounded:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2;
- (void)_updateForegroundScenesForNotificationCenter:(BOOL)arg1;
- (id)initWithCoverSheetWindow:(id)arg1;
- (void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)arg1;
- (void)updateSceneManagerForPresented:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2;

@end
