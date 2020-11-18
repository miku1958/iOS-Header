//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSTimer, PUTilingLayout, PUTilingView, PUValueFilter;
@protocol PUTilingViewSpeedometerDelegate;

__attribute__((visibility("hidden")))
@interface PUTilingViewSpeedometer : NSObject
{
    PUValueFilter *_xSmoothingFilter;
    PUValueFilter *_ySmoothingFilter;
    id<PUTilingViewSpeedometerDelegate> _delegate;
    PUTilingView *__lastTilingView;
    PUTilingLayout *__lastTilingLayout;
    double __lastTime;
    NSTimer *__timeoutTimer;
    CADisplayLink *__displayLink;
    struct CGPoint _scrollSpeed;
    struct CGPoint _smoothScrollSpeed;
    struct CGPoint __lastVisibleOrigin;
}

@property (strong, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property (weak, nonatomic, setter=_setLastTilingLayout:) PUTilingLayout *_lastTilingLayout; // @synthesize _lastTilingLayout=__lastTilingLayout;
@property (weak, nonatomic, setter=_setLastTilingView:) PUTilingView *_lastTilingView; // @synthesize _lastTilingView=__lastTilingView;
@property (nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property (nonatomic, setter=_setLastVisibleOrigin:) struct CGPoint _lastVisibleOrigin; // @synthesize _lastVisibleOrigin=__lastVisibleOrigin;
@property (strong, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property (readonly, nonatomic) PUValueFilter *_xSmoothingFilter;
@property (readonly, nonatomic) PUValueFilter *_ySmoothingFilter;
@property (weak, nonatomic) id<PUTilingViewSpeedometerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, setter=_setScrollSpeed:) struct CGPoint scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property (nonatomic, setter=_setSmoothScrollSpeed:) struct CGPoint smoothScrollSpeed; // @synthesize smoothScrollSpeed=_smoothScrollSpeed;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_handleTimeoutTimer:(id)arg1;
- (id)_newSmoothingFilter;
- (void)_rescheduleTimers;
- (void)scrollViewDidScroll:(id)arg1;

@end
