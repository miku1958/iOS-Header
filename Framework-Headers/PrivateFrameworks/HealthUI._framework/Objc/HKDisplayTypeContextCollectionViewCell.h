//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HKDisplayTypeContextItem, HKUIMetricColors, UIButton, UILabel;
@protocol HKDisplayTypeContextCollectionViewCellDelegate;

@interface HKDisplayTypeContextCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIButton *_infoButton;
    UILabel *_valueLabel;
    UILabel *_unitLabel;
    UILabel *_dateLabel;
    HKUIMetricColors *_currentMetricColors;
    HKDisplayTypeContextItem *_contextItem;
    id<HKDisplayTypeContextCollectionViewCellDelegate> _delegate;
}

@property (strong, nonatomic) HKDisplayTypeContextItem *contextItem; // @synthesize contextItem=_contextItem;
@property (weak, nonatomic) id<HKDisplayTypeContextCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (double)_bottomOffsetFromDateBaseline;
- (double)_dateBaselineOffsetFromValue;
- (id)_dateLabelFont;
- (double)_titleLabelBaselineOffsetFromTop;
- (id)_titleLabelFont;
- (id)_unitLabelFont;
- (double)_valueLabelBaselineOffsetFromDateLabel;
- (id)_valueLabelFont;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)updateMetricColors:(BOOL)arg1;
- (void)updateUI:(BOOL)arg1;
- (void)updateUIColors;

@end

