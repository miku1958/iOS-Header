//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridCell.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell
{
    UILabel *_curationScoreLabel;
    UILabel *_aestheticScoreLabel;
    UILabel *_promotionScoreLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    double _curationScore;
    double _aestheticScore;
    double _promotionScore;
    UIColor *_color;
    NSString *_title;
    NSString *_subtitle;
}

@property (nonatomic) double aestheticScore; // @synthesize aestheticScore=_aestheticScore;
@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property (nonatomic) double promotionScore; // @synthesize promotionScore=_promotionScore;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
