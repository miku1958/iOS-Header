//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface MPSwipeGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startLocation;
    double _startTime;
    UITouch *_trackingTouch;
    long long _swipeDirection;
}

@property (readonly, nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

