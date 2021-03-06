//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    BOOL _didTouchOutside;
    UIView *_focusedView;
    struct UIEdgeInsets _touchAllowance;
}

@property (readonly, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
@property (nonatomic) struct UIEdgeInsets touchAllowance; // @synthesize touchAllowance=_touchAllowance;

- (void).cxx_destruct;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

