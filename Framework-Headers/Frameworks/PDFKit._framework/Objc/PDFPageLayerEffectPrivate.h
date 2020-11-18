//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, LoupeRenderRequest, NSMutableDictionary, NSUUID, PDFAnnotation, PDFSelection, PDFTimer;
@protocol PDFPageLayerInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffectPrivate : NSObject
{
    id<PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    struct CGRect pageFrame;
    BOOL shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    PDFSelection *selection;
    NSMutableDictionary *selectionEffectLayers;
    BOOL showTextSelectionHandle;
    struct {
        BOOL isOnFirstPage;
        BOOL isOnLastPage;
        struct CGRect firstPageRect;
        struct CGRect lastPageRect;
    } pageInfo;
    CALayer *rootSelectionLayer;
    CALayer *selectionStartHandle;
    CALayer *selectionEndHandle;
    PDFTimer *zoomTimer;
    CALayer *textMagnifierLayer;
    struct CGImage *magnifierImageMask;
    struct CGSize magnifierSize;
    CALayer *lollipopMagnifierLayer;
    struct CGImage *lollipopImageMask;
    struct CGSize lollipopSize;
    LoupeRenderRequest *loupeRenderRequest;
    struct os_unfair_lock_s loupeRenderRequestLock;
}

- (void).cxx_destruct;

@end

