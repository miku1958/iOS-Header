//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PKPaymentTransactionDetailHeaderView : UIView
{
    UIView *_contentView;
    UIView *_contentViewSizingView;
    NSString *_subtitleText;
    NSString *_secondarySubtitleText;
    double _topPadding;
    double _contentToLabelPadding;
    double _bottomPadding;
    UILabel *_subtitleLabel;
    UILabel *_secondarySubtitleLabel;
}

@property (nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property (nonatomic) double contentToLabelPadding; // @synthesize contentToLabelPadding=_contentToLabelPadding;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) UIView *contentViewSizingView; // @synthesize contentViewSizingView=_contentViewSizingView;
@property (strong, nonatomic) UILabel *secondarySubtitleLabel; // @synthesize secondarySubtitleLabel=_secondarySubtitleLabel;
@property (copy, nonatomic) NSString *secondarySubtitleText; // @synthesize secondarySubtitleText=_secondarySubtitleText;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property (nonatomic) double topPadding; // @synthesize topPadding=_topPadding;

- (void).cxx_destruct;
- (void)_updateSecondarySubtitleLabel;
- (void)_updateSubtitleLabel;
- (id)initWithContentView:(id)arg1 contentViewSizingView:(id)arg2 subtitleText:(id)arg3 secondarySubtitleText:(id)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
