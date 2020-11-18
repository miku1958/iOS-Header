//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface EKEventDetailsHighlightControl : UIControl
{
    NSArray *_titleAndSubtitleVisibleContraints;
    NSArray *_justTitleVisibleContraints;
    NSArray *_justSubtitleVisibleContraints;
    NSString *_actionText;
    NSString *_subtitleText;
    UIImageView *_iconStack;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_actionLabel;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelPaddingConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
}

@property (readonly, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property (readonly, strong, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property (readonly, nonatomic) UIImageView *iconStack; // @synthesize iconStack=_iconStack;
@property (readonly, strong, nonatomic) NSLayoutConstraint *interLabelPaddingConstraint; // @synthesize interLabelPaddingConstraint=_interLabelPaddingConstraint;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, strong, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;

+ (id)actionColor;
+ (double)bottomMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)subtitleColor;
+ (id)subtitleFont;
+ (id)titleFont;
+ (double)topMarginConstant;
- (void).cxx_destruct;
- (void)_updateSubtitleAndActionText;
- (void)_updateTitleAndSubtitleConstraints;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setActionText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setSubtitleAttributedText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;

@end

