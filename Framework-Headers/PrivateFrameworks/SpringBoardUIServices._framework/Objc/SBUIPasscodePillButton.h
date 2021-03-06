//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CABackdropLayer, NSString, UIFont, UILabel, UIView;

@interface SBUIPasscodePillButton : UIControl
{
    UILabel *_titleLabel;
    UIView *_pillView;
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
    double _unhighlightedAlpha;
    double _highlightedAlpha;
}

@property (copy, nonatomic) UIFont *font;
@property (nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double unhighlightedAlpha; // @synthesize unhighlightedAlpha=_unhighlightedAlpha;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end

