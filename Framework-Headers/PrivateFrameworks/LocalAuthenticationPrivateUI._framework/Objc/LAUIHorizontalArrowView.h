//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface LAUIHorizontalArrowView : UIView
{
    UIColor *_color;
    BOOL _effective_animating;
    unsigned short _dismissal_animation_count;
    BOOL _animated;
    double _resting_height;
    UIView *_container;
    UIView *_arrow_container;
    UIImageView *_head;
    UIView *_tail_container;
    UIImageView *_tail;
    UILabel *_label;
    BOOL _pulsing;
    struct periodic_animation_state _head_pulse;
    struct periodic_animation_state _tail_container_pulse;
    struct periodic_animation_state _tail_counter_pulse;
    BOOL _animating;
    long long _direction;
    double _displacement;
    NSString *_text;
    struct CGSize _maximum_line_size;
}

@property (nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property (nonatomic) long long direction; // @synthesize direction=_direction;
@property (nonatomic) double displacement; // @synthesize displacement=_displacement;
@property (nonatomic) struct CGSize maximumLineSize; // @synthesize maximumLineSize=_maximum_line_size;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_layoutIfNeededAnimated:(BOOL)arg1;
- (void)_updateAnimatingAnimated:(BOOL)arg1;
- (void)_updateDirectionTransform;
- (void)_updateFont;
- (void)_updateLabelSize;
- (void)_updatePulsingWithDelay:(double)arg1;
- (void)_updateViewsWithColor;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

