//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer
{
    long long _barAction;
    double _bias;
}

@property (readonly, nonatomic) long long barAction; // @synthesize barAction=_barAction;
@property (readonly, nonatomic) double bias; // @synthesize bias=_bias;

- (void)_setDelegate:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
