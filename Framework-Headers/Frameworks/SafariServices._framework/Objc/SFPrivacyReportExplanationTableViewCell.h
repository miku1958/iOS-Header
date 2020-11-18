//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SFPrivacyReportIconView, UIButton, UILabel;
@protocol SFPrivacyReportExplanationTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell
{
    SFPrivacyReportIconView *_iconView;
    UILabel *_textLabel;
    UIButton *_toggleButton;
    UIButton *_sizingToggleButton;
    NSArray *_iconConstraints;
    BOOL _wideLayout;
    BOOL _expanded;
    id<SFPrivacyReportExplanationTableViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id<SFPrivacyReportExplanationTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;

- (void).cxx_destruct;
- (struct CGRect)_separatorFrame;
- (void)_toggleExpanded:(id)arg1;
- (void)_updateToggleButtonText;
- (void)_updateUsesWideLayoutForSize:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;

@end
