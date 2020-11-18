//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayRenderer.h>

@class NSArray, NSMutableDictionary, UIColor;

@interface MKOverlayPathRenderer : MKOverlayRenderer
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    int _lineJoin;
    int _lineCap;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
    BOOL _shouldRasterize;
    struct os_unfair_lock_s _runningVectorGeometryAnimationsLock;
    NSMutableDictionary *_runningVectorGeometryAnimations;
    BOOL _externalSubclassOverridesDrawingMethods;
}

@property (readonly, nonatomic, getter=_externalSubclassOverridesDrawingMethods) BOOL externalSubclassOverridesDrawingMethods; // @synthesize externalSubclassOverridesDrawingMethods=_externalSubclassOverridesDrawingMethods;
@property (strong) UIColor *fillColor;
@property int lineCap;
@property (copy) NSArray *lineDashPattern;
@property double lineDashPhase;
@property int lineJoin;
@property double lineWidth;
@property double miterLimit;
@property const struct CGPath *path;
@property (nonatomic) BOOL shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property (strong) UIColor *strokeColor;

+ (BOOL)_externalSubclassOverridesDrawingMethods;
+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(CDUnknownBlockType)arg2;
- (BOOL)_canProvideVectorGeometry;
- (void)_performInitialConfiguration;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (BOOL)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (void)createPath;
- (void)dealloc;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)invalidatePath;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

@end
