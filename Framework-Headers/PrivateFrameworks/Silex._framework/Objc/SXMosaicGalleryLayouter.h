//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryColumnLayout;
@protocol SXMosaicGalleryLayouterDataSource;

@interface SXMosaicGalleryLayouter : NSObject
{
    BOOL _reverseNextHorizontalLivingRoomLayout;
    unsigned long long _numberOfItems;
    double _width;
    NSArray *_supportedTileTypeClusters;
    id<SXMosaicGalleryLayouterDataSource> _dataSource;
    SXMosaicGalleryColumnLayout *_columnLayout;
    NSMutableArray *_layouts;
    NSMutableArray *_clusters;
    NSMutableArray *_items;
    NSMutableArray *_views;
    NSMutableArray *_frames;
    struct CGSize _contentSize;
}

@property (readonly, nonatomic) NSMutableArray *clusters; // @synthesize clusters=_clusters;
@property (readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property (readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (weak, nonatomic) id<SXMosaicGalleryLayouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property (readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property (readonly, nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property (nonatomic) BOOL reverseNextHorizontalLivingRoomLayout; // @synthesize reverseNextHorizontalLivingRoomLayout=_reverseNextHorizontalLivingRoomLayout;
@property (readonly, nonatomic) NSArray *supportedTileTypeClusters; // @synthesize supportedTileTypeClusters=_supportedTileTypeClusters;
@property (readonly, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property (nonatomic) double width; // @synthesize width=_width;

- (void).cxx_destruct;
- (void)calculateLayoutForWidth:(double)arg1;
- (id)clusterForItemsInRange:(struct _NSRange)arg1;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemsForRange:(struct _NSRange)arg1;
- (id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2;
- (void)layoutGalleryOnView:(id)arg1;
- (void)reset;
- (void)resetLayout;
- (id)viewForItem:(id)arg1;
- (id)viewForItemAtIndex:(unsigned long long)arg1;

@end

