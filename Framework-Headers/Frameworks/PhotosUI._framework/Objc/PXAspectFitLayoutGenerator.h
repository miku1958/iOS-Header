//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator
{
    struct _PXLayoutGeometry *_geometries;
    unsigned long long _geometriesCount;
    long long _lastGeometryIndex;
    struct CGSize _contentSize;
    double _currentRowUnmodifiedHeight;
    double _currentRowFinalHeight;
}

@property (copy, nonatomic) PXAspectFitLayoutMetrics *metrics; // @dynamic metrics;

- (void)_computeGeometriesIfNeeded;
- (void)_fillRowFromIndex:(long long *)arg1 withCount:(long long)arg2;
- (struct _PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1 atPosition:(struct CGPoint)arg2 withHorizontalGap:(double)arg3;
- (struct _PXLayoutGeometry)_lastGeometry;
- (void)_prepareGeometriesForCount:(unsigned long long)arg1;
- (double)_rowHeightForItemsInRange:(struct _NSRange)arg1;
- (void)dealloc;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (struct CGSize)size;

@end

