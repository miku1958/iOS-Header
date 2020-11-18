//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_bottomToTitleLastBaselineConstraint;
}

@property (strong, nonatomic) NSLayoutConstraint *bottomToTitleLastBaselineConstraint; // @synthesize bottomToTitleLastBaselineConstraint=_bottomToTitleLastBaselineConstraint;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy, nonatomic) NSString *titleText;

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraintConstants;

@end
