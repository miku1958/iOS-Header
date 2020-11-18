//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGroupLayout.h>

@class TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingLayout : TSDGroupLayout
{
    BOOL _updatingOpacity;
    double _dynamicOpacity;
}

@property (readonly, nonatomic) struct CGRect frameForMovieExport;
@property (readonly, nonatomic) TSDFreehandDrawingInfo *freehandInfo;
@property (readonly, nonatomic) double opacity;
@property (nonatomic) double p_dynamicOpacity; // @synthesize p_dynamicOpacity=_dynamicOpacity;
@property (nonatomic, getter=p_isUpdatingOpacity) BOOL p_updatingOpacity; // @synthesize p_updatingOpacity=_updatingOpacity;
@property (readonly, nonatomic) BOOL shouldSpacerShapeProvideSpace;

- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)additionalInfosForChildLayouts;
- (struct CGRect)computeBoundsForStandardKnobs;
- (id)descendentWrappables;
- (BOOL)descendentWrappablesContainsWrappable:(id)arg1;
- (struct CGSize)minimumSize;
- (id)p_sizeEnforcingChild;
- (void)processChangedProperty:(int)arg1;
- (BOOL)shouldSnapWhileResizing;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;

@end

