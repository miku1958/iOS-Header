//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
{
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    unsigned int _hasParentScrollView:1;
}

@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void).cxx_destruct;
- (double)_hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

