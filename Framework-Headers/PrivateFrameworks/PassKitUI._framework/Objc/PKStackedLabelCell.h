//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface PKStackedLabelCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _isRTL;
    NSString *_titleText;
    NSString *_detailText;
}

@property (copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

- (void).cxx_destruct;
- (void)_applyLabelStyles;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

