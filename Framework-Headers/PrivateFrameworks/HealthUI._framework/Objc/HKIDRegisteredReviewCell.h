//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKIDRegisteredReviewCell : UITableViewCell
{
    UILabel *_titleLabel;
}

@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end

