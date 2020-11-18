//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIGestureRecognizer, UIPress, UITouch;

@protocol UIGestureRecognizerDelegate <NSObject>

@optional
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceivePress:(UIPress *)arg2;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
@end

