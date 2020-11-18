//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDDataListViewControllerCell : UITableViewCell
{
    NSLayoutConstraint *_largeTextIconImageCenterYAnchorConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    UIImageView *_iconImageView;
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property (strong, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;

- (void).cxx_destruct;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
