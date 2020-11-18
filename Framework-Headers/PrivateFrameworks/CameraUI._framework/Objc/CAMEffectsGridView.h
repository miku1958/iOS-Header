//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMGLView.h>

@class NSDictionary;

@interface CAMEffectsGridView : CAMGLView
{
    BOOL _square;
    BOOL __fetchingGridFilters;
    BOOL __atomicBlackAndWhite;
    NSDictionary *__gridFilters;
}

@property (getter=_isAtomicBlackAndWhite, setter=_setAtomicBlackAndWhite:) BOOL _atomicBlackAndWhite; // @synthesize _atomicBlackAndWhite=__atomicBlackAndWhite;
@property (setter=_setFetchingGridFilters:) BOOL _fetchingGridFilters; // @synthesize _fetchingGridFilters=__fetchingGridFilters;
@property (strong, setter=_setGridFilters:) NSDictionary *_gridFilters; // @synthesize _gridFilters=__gridFilters;
@property (getter=isBlackAndWhite) BOOL blackAndWhite;
@property (getter=isSquare) BOOL square; // @synthesize square=_square;

- (void).cxx_destruct;
- (unsigned long long)_cellCount;
- (unsigned long long)_cellsPerRow;
- (long long)_filterTypeForGridIndex:(unsigned long long)arg1;
- (unsigned long long)_gridIndexForFilterType:(long long)arg1;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(BOOL)arg4;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect)_squareCropFromRect:(struct CGRect)arg1;
- (void)dealloc;
- (long long)filterTypeForPoint:(struct CGPoint)arg1;
- (id)filterTypes;
- (struct CGRect)rectForFilterType:(long long)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;

@end
