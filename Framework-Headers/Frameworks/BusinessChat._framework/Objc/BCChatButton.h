//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, UIView;

@interface BCChatButton : UIControl
{
    BOOL _isInverted;
    long long _style;
    UILabel *_label;
    UILabel *_smallLabel;
    UIImageView *_iconImageView;
    UIView *_centeredView;
}

@property (strong, nonatomic) UIView *centeredView; // @synthesize centeredView=_centeredView;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (nonatomic) BOOL isInverted; // @synthesize isInverted=_isInverted;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) UILabel *smallLabel; // @synthesize smallLabel=_smallLabel;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (struct CGSize)calculateButtonLayout;
- (id)color:(struct BCColor)arg1;
- (void)createSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAccessibilityValues;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOpacityForView:(id)arg1 opacity:(double)arg2;
- (void)setTextForLabel:(id)arg1 label:(id)arg2;
- (void)setup;
- (void)sizeToFit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAppearanceForState:(long long)arg1;
- (void)updateButtonLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

