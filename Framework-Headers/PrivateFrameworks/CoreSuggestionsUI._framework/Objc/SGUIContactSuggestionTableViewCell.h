//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, SGRealtimeContact, UIButton, UIImageView, UILabel;
@protocol SGUIContactSuggestionTableViewCellDelegate;

@interface SGUIContactSuggestionTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_ignoreButton;
    UIButton *_addUpdateButton;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interLabelAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    SGRealtimeContact *_realtimeContact;
    id<SGUIContactSuggestionTableViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id<SGUIContactSuggestionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) SGRealtimeContact *realtimeContact; // @synthesize realtimeContact=_realtimeContact;

+ (id)actionButtonTitleForContact:(id)arg1;
+ (double)bottomMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (id)titleFont;
+ (double)topMarginConstant;
- (void).cxx_destruct;
- (void)_addUpdateButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)_setLabelAndButtonFonts;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
