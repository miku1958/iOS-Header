//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, UIViewController, _SFBrowserContentViewController;

__attribute__((visibility("hidden")))
@interface _SFUnresponsiveWebProcessController : NSObject
{
    NSTimer *_webProcessWatchdogTimer;
    NSMutableArray *_tapToRadarRecords;
    _SFBrowserContentViewController *_contentViewController;
    BOOL _shouldIgnoreDidBecomeResponsive;
    UIViewController *_activeBrowserContentViewController;
}

@property (weak, nonatomic) UIViewController *activeBrowserContentViewController; // @synthesize activeBrowserContentViewController=_activeBrowserContentViewController;
@property (nonatomic) BOOL shouldIgnoreDidBecomeResponsive; // @synthesize shouldIgnoreDidBecomeResponsive=_shouldIgnoreDidBecomeResponsive;
@property (readonly, nonatomic) BOOL supportsTapToRadar;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_promptTapToRadar:(CDUnknownBlockType)arg1;
- (void)_tapToRadar;
- (void)_webProcessWatchdogTimerFired:(id)arg1;
- (void)recordURLForTapToRadar:(id)arg1 hostAppIdentifier:(id)arg2;
- (void)scheduleWatchdogTimerForContentViewController:(id)arg1;
- (void)unscheduleWatchdogTimer;

@end

