//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, MPAVRoute, MPUAVRouteHeaderLabel, UIImageView, UIVisualEffect;

@interface MPUAVRouteHeaderView : UIControl
{
    CAShapeLayer *_topSeparatorLayer;
    CAShapeLayer *_bottomSeparatorLayer;
    UIImageView *_iconImageView;
    UIImageView *_disclosureIndicatorImageView;
    BOOL _activated;
    MPAVRoute *_route;
    UIVisualEffect *_primaryVisualEffect;
    UIVisualEffect *_secondaryVisualEffect;
    MPUAVRouteHeaderLabel *_textLabel;
}

@property (nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property (strong, nonatomic) UIVisualEffect *primaryVisualEffect; // @synthesize primaryVisualEffect=_primaryVisualEffect;
@property (strong, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property (strong, nonatomic) UIVisualEffect *secondaryVisualEffect; // @synthesize secondaryVisualEffect=_secondaryVisualEffect;
@property (readonly, nonatomic) MPUAVRouteHeaderLabel *textLabel; // @synthesize textLabel=_textLabel;

- (void).cxx_destruct;
- (id)_disclosureIconImageForCurrentState;
- (void)_init;
- (void)_updateBottomClippingForAnimatedTransition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActivated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end

