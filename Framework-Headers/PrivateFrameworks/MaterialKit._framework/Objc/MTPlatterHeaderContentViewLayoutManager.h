//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPlatterHeaderContentView, NSDate, UIButton, UILabel, UIView;

@interface MTPlatterHeaderContentViewLayoutManager : NSObject
{
    MTPlatterHeaderContentView *_headerContentView;
}

@property (readonly, nonatomic) double contentBaseline;
@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
@property (readonly, weak, nonatomic) MTPlatterHeaderContentView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property (readonly, nonatomic, getter=_heedsHorizontalLayoutMargins) BOOL heedsHorizontalLayoutMargins;
@property (readonly, nonatomic, getter=_iconButton) UIButton *iconButton;
@property (readonly, nonatomic, getter=_layoutMargins) struct UIEdgeInsets layoutMargins;
@property (readonly, nonatomic, getter=_outgoingTitleLabel) UILabel *outgoingTitleLabel;
@property (readonly, nonatomic, getter=_shouldReverseLayoutDirection) BOOL shouldReverseLayoutDirection;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (readonly, nonatomic, getter=_utilityButton) UIButton *utilityButton;
@property (readonly, nonatomic, getter=_utilityView) UIView *utilityView;

- (void).cxx_destruct;
- (struct CGSize)_measuringSizeForWidth:(double)arg1;
- (double)_titleLabelBaselineOffset;
- (struct CGRect)_titleLabelBoundsForSize:(struct CGSize)arg1 withNumberOfLines:(double)arg2;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithPlatterHeaderContentView:(id)arg1;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)layoutIconButtonWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutUtilityButtonWithScale:(double)arg1;

@end

