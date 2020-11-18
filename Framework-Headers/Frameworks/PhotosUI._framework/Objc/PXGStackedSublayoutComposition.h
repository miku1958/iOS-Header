//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSublayoutComposition.h>

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition
{
    long long _axis;
    double _interlayoutSpacing;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;

- (struct CGRect)contentBounds;
- (id)init;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;

@end
