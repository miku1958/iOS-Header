//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFontDescriptor;
@protocol VideosExtrasMainMenuSectionMetricsDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasMainMenuSectionMetrics : NSObject
{
    double _fittingWidth;
    BOOL _needsUpdate;
    long long _itemCount;
    struct CGSize *_calculatedSizes;
    id<VideosExtrasMainMenuSectionMetricsDataSource> _dataSource;
    UIFontDescriptor *_desiredFontDescriptor;
    UIFontDescriptor *_minimumFontDescriptor;
    double _desiredCellSpacing;
    double _minimumCellSpacing;
    double _desiredWidth;
    UIFontDescriptor *_fittingFontDescriptor;
    double _fittingCellSpacing;
    struct CGSize _totalFittingSize;
}

@property (weak, nonatomic) id<VideosExtrasMainMenuSectionMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) double desiredCellSpacing; // @synthesize desiredCellSpacing=_desiredCellSpacing;
@property (strong, nonatomic) UIFontDescriptor *desiredFontDescriptor; // @synthesize desiredFontDescriptor=_desiredFontDescriptor;
@property (nonatomic) double desiredWidth; // @synthesize desiredWidth=_desiredWidth;
@property (readonly, nonatomic) double fittingCellSpacing; // @synthesize fittingCellSpacing=_fittingCellSpacing;
@property (readonly, nonatomic) UIFontDescriptor *fittingFontDescriptor; // @synthesize fittingFontDescriptor=_fittingFontDescriptor;
@property (nonatomic) double minimumCellSpacing; // @synthesize minimumCellSpacing=_minimumCellSpacing;
@property (strong, nonatomic) UIFontDescriptor *minimumFontDescriptor; // @synthesize minimumFontDescriptor=_minimumFontDescriptor;
@property (readonly, nonatomic) struct CGSize totalFittingSize; // @synthesize totalFittingSize=_totalFittingSize;

- (void).cxx_destruct;
- (struct CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out struct CGSize *)arg4;
- (void)_recalculateSizes;
- (void)_setNeedsUpdate;
- (void)_updateAllMetrics;
- (void)dealloc;
- (void)setFittingWidth:(double)arg1;
- (struct CGSize)sizeForCellAtIndex:(long long)arg1;
- (void)updateSizes;

@end

