//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition
{
    PXLayoutGenerator *_layoutGenerator;
    struct _PXLayoutGeometry *_layoutGeometries;
    long long _layoutGeometriesCapacity;
}

@property (readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;

- (void).cxx_destruct;
- (struct CGRect)contentBounds;
- (void)dealloc;
- (void)invalidateLayout;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;

@end
