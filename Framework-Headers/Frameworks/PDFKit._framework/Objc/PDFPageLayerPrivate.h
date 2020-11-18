//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSDate, NSMutableArray, NSMutableDictionary, PDFPage, PDFRenderingProperties, PDFTimer;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerPrivate : NSObject
{
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    long long oldPageRotation;
    struct CGRect oldBoundsForBox;
    CALayer *tilesLayer;
    CALayer *shadowLayer;
    int generationCount;
    double lastLayoutZoomFactor;
    struct CGRect lastLayerFrameInRootView;
    NSDate *lastZoomChange;
    BOOL zoomChangeScheduled;
    double zoomGenerationDelay;
    unsigned long long visibilityDelegateIndex;
    BOOL tileLayerHidden;
    NSMutableArray *tiles;
    BOOL allowUpdate;
    PDFTimer *forcedUpdateTimer;
    BOOL isForcingUpdate;
    _Atomic BOOL isTiling;
    _Atomic BOOL requestedTiling;
    CALayer *effectsLayer;
    NSMutableDictionary *pageLayerEffects;
}

- (void).cxx_destruct;

@end
