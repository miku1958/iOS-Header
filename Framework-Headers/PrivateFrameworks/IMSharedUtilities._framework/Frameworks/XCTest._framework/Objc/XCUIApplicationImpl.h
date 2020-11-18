//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCAccessibilityElement, XCUIApplicationProcess;

@interface XCUIApplicationImpl : NSObject
{
    BOOL _supportsAutomationSession;
    NSString *_path;
    NSString *_bundleID;
    XCUIApplicationProcess *_currentProcess;
}

@property (readonly) XCAccessibilityElement *accessibilityElement;
@property (readonly) BOOL background;
@property (readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) XCUIApplicationProcess *currentProcess; // @synthesize currentProcess=_currentProcess;
@property (readonly) BOOL foreground;
@property (readonly, copy) NSString *path; // @synthesize path=_path;
@property (nonatomic) int processID;
@property (readonly) BOOL running;
@property (nonatomic) unsigned long long state;
@property BOOL supportsAutomationSession; // @synthesize supportsAutomationSession=_supportsAutomationSession;
@property (readonly) BOOL suspended;

+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingSuspended;
- (void)_activate;
- (void)_activateForPlatform;
- (void)_awaitValidCurrentProcess;
- (void)_launchUsingPlatformWithArguments:(id)arg1 environment:(id)arg2;
- (void)_launchUsingXcodeWithArguments:(id)arg1 environment:(id)arg2;
- (void)_launchWithRequest:(id)arg1;
- (void)_waitForLaunchProgress;
- (void)dealloc;
- (id)description;
- (void)handleCrashUnderSymbol:(id)arg1;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2;
- (void)serviceOpenRequest:(id)arg1;
- (void)terminate;
- (void)waitForAccessibilityActive;
- (void)waitForRunningForegroundStateAndRequireAccessibility:(BOOL)arg1;
- (void)waitForState:(unsigned long long)arg1 timeout:(double)arg2;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;

@end

