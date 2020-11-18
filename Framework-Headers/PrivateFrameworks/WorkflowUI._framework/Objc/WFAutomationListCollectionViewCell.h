//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HFTriggerItem, NSLayoutConstraint, NSString, UILabel, UIView, WFAutomationSummaryIconsView, WFConfiguredTrigger, WFWorkflow;

@interface WFAutomationListCollectionViewCell : UICollectionViewCell
{
    WFConfiguredTrigger *_configuredTrigger;
    WFWorkflow *_workflow;
    HFTriggerItem *_homeTrigger;
    NSString *_identifier;
    WFAutomationSummaryIconsView *_summaryIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
}

@property (strong, nonatomic) WFConfiguredTrigger *configuredTrigger; // @synthesize configuredTrigger=_configuredTrigger;
@property (readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) HFTriggerItem *homeTrigger; // @synthesize homeTrigger=_homeTrigger;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long maskedCorners;
@property (readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (readonly, nonatomic) NSLayoutConstraint *separatorViewHeightConstraint; // @synthesize separatorViewHeightConstraint=_separatorViewHeightConstraint;
@property BOOL showsSeparator;
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView; // @synthesize summaryIconsView=_summaryIconsView;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;

- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUI;

@end
