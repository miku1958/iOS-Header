//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject
{
    double _scale;
    double _velocity;
    long long _state;
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;
}

@property (strong, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)arg1;
- (struct CGPoint)anchorPoint;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (double)scale;
- (void)simulateScale:(double)arg1 velocity:(double)arg2;
- (double)velocity;

@end
