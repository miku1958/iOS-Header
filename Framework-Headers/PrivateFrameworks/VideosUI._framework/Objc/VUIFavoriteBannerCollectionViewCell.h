//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell
{
    VUIFavoriteBannerView *_bannerView;
    VUIFavoriteBannerLayout *_bannerLayout;
    double _width;
}

@property (strong, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property (strong, nonatomic) VUIFavoriteBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (nonatomic) double width; // @synthesize width=_width;

+ (id)configureCellWithElement:(id)arg1 existingCell:(id)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

