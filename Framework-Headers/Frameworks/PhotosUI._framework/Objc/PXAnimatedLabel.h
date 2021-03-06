//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PXAnimatedCounter, UIFont, UILabel;

@interface PXAnimatedLabel : UIView
{
    UIFont *_font;
    NSString *_text;
    PXAnimatedCounter *_counter;
    UILabel *_label;
    NSLayoutConstraint *_counterWidthConstraint;
}

@property (strong) PXAnimatedCounter *counter; // @synthesize counter=_counter;
@property (readonly) NSLayoutConstraint *counterWidthConstraint; // @synthesize counterWidthConstraint=_counterWidthConstraint;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (strong) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)_updateConstraintsForText;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

