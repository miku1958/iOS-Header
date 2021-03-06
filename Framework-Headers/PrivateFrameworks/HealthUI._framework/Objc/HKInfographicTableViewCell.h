//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface HKInfographicTableViewCell : UITableViewCell
{
    BOOL hideSeparator;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIView *_separator;
    NSLayoutConstraint *_heightConstraint;
}

@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (strong, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;

- (void).cxx_destruct;
- (id)_labelWithFont:(id)arg1;
- (id)_titleFont;
- (id)_valueFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorHidden:(BOOL)arg1;

@end

