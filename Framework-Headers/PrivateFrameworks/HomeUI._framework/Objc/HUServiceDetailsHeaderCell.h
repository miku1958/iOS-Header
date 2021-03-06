//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UITextView;
@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    id<HUResizableCellDelegate> _resizingDelegate;
    UIButton *_actionButton;
    UITextView *_messageTextView;
    NSArray *_hiddenMessageTextViewConstraints;
    NSArray *_visibleMessageTextViewConstraints;
    UIStackView *_titleSpinnerStackView;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
    UILabel *_titleLabel;
    NSLayoutConstraint *_spinnerBottomConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    NSLayoutConstraint *_actionBottomConstraint;
}

@property (strong, nonatomic) NSLayoutConstraint *actionBottomConstraint; // @synthesize actionBottomConstraint=_actionBottomConstraint;
@property (strong, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property (strong, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // @synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *hiddenMessageTextViewConstraints; // @synthesize hiddenMessageTextViewConstraints=_hiddenMessageTextViewConstraints;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) NSLayoutConstraint *messageBottomConstraint; // @synthesize messageBottomConstraint=_messageBottomConstraint;
@property (strong, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
@property (strong, nonatomic) NSLayoutConstraint *spinnerBottomConstraint; // @synthesize spinnerBottomConstraint=_spinnerBottomConstraint;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIStackView *titleSpinnerStackView; // @synthesize titleSpinnerStackView=_titleSpinnerStackView;
@property (strong, nonatomic) NSArray *visibleMessageTextViewConstraints; // @synthesize visibleMessageTextViewConstraints=_visibleMessageTextViewConstraints;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_updateErrorLabelConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (id)_visibleMessageTextViewConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

