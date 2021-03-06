//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUILabel, VUISeparatorView, VUISportsProductBannerLayout;

__attribute__((visibility("hidden")))
@interface VUISportsProductBannerView : UIView
{
    VUISportsProductBannerLayout *_layout;
    VUILabel *_titleLabel;
    NSArray *_rowLabels;
    NSArray *_scoreLabels;
    NSArray *_descriptionLabels;
    VUILabel *_footerLabel;
    NSArray *_buttonViews;
    VUILabel *_availabilityTextView;
    UIView *_availabilityImageView;
    double _availabilityImageViewLeftMargin;
    VUISeparatorView *_separatorView;
}

@property (strong, nonatomic) UIView *availabilityImageView; // @synthesize availabilityImageView=_availabilityImageView;
@property (nonatomic) double availabilityImageViewLeftMargin; // @synthesize availabilityImageViewLeftMargin=_availabilityImageViewLeftMargin;
@property (strong, nonatomic) VUILabel *availabilityTextView; // @synthesize availabilityTextView=_availabilityTextView;
@property (strong, nonatomic) NSArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property (strong, nonatomic) NSArray *descriptionLabels; // @synthesize descriptionLabels=_descriptionLabels;
@property (strong, nonatomic) VUILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property (strong, nonatomic) VUISportsProductBannerLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) NSArray *rowLabels; // @synthesize rowLabels=_rowLabels;
@property (strong, nonatomic) NSArray *scoreLabels; // @synthesize scoreLabels=_scoreLabels;
@property (strong, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property (strong, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (struct CGSize)_availabilityImageSizeWithSize:(struct CGSize)arg1;
- (double)_availabilityImageViewLeftMargin;
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(BOOL)arg2;
- (void)_layoutButtonsWithOrigin:(struct CGPoint)arg1 buttonHeight:(double)arg2 buttonWidth:(double)arg3 spacing:(double)arg4;
- (void)_layoutLabels:(id)arg1 scoreLabels:(id)arg2 withOrigin:(struct CGPoint)arg3 maxWidth:(double)arg4;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint)arg2 maxWidth:(double)arg3;
- (void)_layoutScoresWithOrigin:(struct CGPoint)arg1 availableWidth:(double)arg2 padding:(double)arg3;
- (double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2;
- (double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

