//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKAnchorDelegate-Protocol.h>

@class NSString;
@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>
{
    shared_ptr_2fc78ff4 _anchor;
    BOOL _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    struct LayoutContext *_lastLayoutContext;
    struct Coordinate2D<Degrees, double> _lastCoordinate;
    BOOL _isUpdating;
    double _pointsPerMeter;
    id<MDRenderTarget> _displayLayer;
}

@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id<MDRenderTarget> displayLayer; // @synthesize displayLayer=_displayLayer;
@property (nonatomic) BOOL followsTerrain; // @synthesize followsTerrain=_followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_2fc78ff4)_anchorWithContext:(struct LayoutContext *)arg1;
- (void)_updateCachedPointWithContext:(struct LayoutContext *)arg1;
- (void)anchorWorldPointDidChange:(void *)arg1;
- (void)dealloc;
- (void)destroyAnchor;
- (void)layoutWithContext:(struct LayoutContext *)arg1;
- (struct CGPoint)pointInLayer:(id)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (void)updateIfNeeded;

@end

