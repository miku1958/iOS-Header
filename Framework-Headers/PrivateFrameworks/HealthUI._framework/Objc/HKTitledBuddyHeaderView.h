//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;
@protocol HKTitledBuddyHeaderViewDelegate;

@interface HKTitledBuddyHeaderView : UIView
{
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    long long _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    id<HKTitledBuddyHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property (strong, nonatomic) NSString *bodyText;
@property (nonatomic) long long bodyTextAlignment;
@property (weak, nonatomic) id<HKTitledBuddyHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2;
- (void)_linkButtonTapped:(id)arg1;
- (void)_updateBodyTextViewConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)bodyTextView;
- (double)bottomPadding;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (void)setBodyText:(id)arg1 alignment:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

