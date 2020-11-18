//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, QLPreviewViewController, UIScreen, UISnapshotView, _UIHostedWindow;

__attribute__((visibility("hidden")))
@interface QLAirPlayController : NSObject
{
    int _mode;
    UIScreen *_screen;
    _UIHostedWindow *_airPlayWindow;
    UISnapshotView *_snapshotView;
    QLPreviewViewController *_previewViewController;
    NSTimer *_refreshTimer;
}

@property int mode;
@property (strong) QLPreviewViewController *previewViewController;
@property (strong) UIScreen *screen;

- (void)_createAirPlayWindowIfNeeded;
- (void)_removeAirPlayWindow;
- (double)_screenAspectRatioForPreviewViewController:(id)arg1;
- (double)_screenScaleFactorForPreviewViewController:(id)arg1;
- (void)_startUsingPreviewController;
- (void)_stopUsingPreviewController;
- (void)_updateWindowSize;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (void)invalidate;
- (void)refreshSnapshot;
- (void)update;
- (void)updateGeometryForPreviewViewController:(id)arg1;

@end

