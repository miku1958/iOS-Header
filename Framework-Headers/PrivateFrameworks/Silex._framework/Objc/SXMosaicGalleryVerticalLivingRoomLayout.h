//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout
{
    double _largeItemHeight;
    double _smallItemHeight;
}

@property (readonly, nonatomic) double largeItemHeight; // @synthesize largeItemHeight=_largeItemHeight;
@property (readonly, nonatomic) double smallItemHeight; // @synthesize smallItemHeight=_smallItemHeight;

- (id)calculateFrames;
- (double)calculateHeight;
- (struct _NSRange)columnRangeForItem:(id)arg1;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;

@end

