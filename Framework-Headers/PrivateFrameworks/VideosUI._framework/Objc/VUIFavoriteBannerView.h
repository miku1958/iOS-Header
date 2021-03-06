//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUIFavoriteBannerLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerView : UIView
{
    VUIFavoriteBannerLayout *_layout;
    UIView *_backgroundView;
    NSArray *_backgroundImageLogos;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

@property (strong, nonatomic) NSArray *backgroundImageLogos; // @synthesize backgroundImageLogos=_backgroundImageLogos;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) VUIFavoriteBannerLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)_generatePlainWeaveImagePointsForSize:(struct CGSize)arg1;
- (id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 direction:(unsigned long long)arg4;
- (id)_generateSiderowImagePointsForSize:(struct CGSize)arg1;
- (id)_generateSingleRowImagePoints;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(BOOL)arg2;
- (struct CGSize)imageSizeForBannerStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)prepareForCellReuse;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

