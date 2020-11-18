//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    long long _headerType;
    double _lastBaselineToBottomDistance;
    NSString *_titleText;
}

@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

- (void).cxx_destruct;
- (void)_setupUI;
- (id)_titleLabelFont;
- (double)_titleLabelLastBaselineToBottom;
- (double)_titleLabelTopToFirstBaseline;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHeaderType:(long long)arg1;
- (void)setLastBaselineToBottomDistance:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
