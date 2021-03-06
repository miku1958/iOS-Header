//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration
{
}

@property (readonly, nonatomic) struct CGSize artworkSize;
@property (readonly, nonatomic) long long mediaIconType;
@property (readonly, nonatomic) BOOL showContentRating;

+ (id)copyDefaultContext;
- (struct UIEdgeInsets)_ratingBorderInsets;
- (double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double *)arg2 withModifiers:(unsigned long long)arg3;
- (double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double *)arg2 withModifiers:(unsigned long long)arg3;
- (id)copyImageDataProvider;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end

