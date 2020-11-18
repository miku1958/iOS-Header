//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageSelectionLayerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageSelectionLayer : CALayer
{
    PDFPageSelectionLayerPrivate *_private;
}

- (void).cxx_destruct;
- (id)_activeColor;
- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(BOOL)arg2;
- (void)_generateRects;
- (void)_generateSelectionIsFirstPage:(BOOL)arg1 isLastPage:(BOOL)arg2;
- (id)_hashRectTransformPair:(CDStruct_b93daf5b *)arg1;
- (id)_inactiveColor;
- (void)_updateGraphics;
- (void)_updateHandleGraphics;
- (void)clearTextSelectionHandles;
- (void)dealloc;
- (void)enableTextSelectionHandles;
- (id)init;
- (id)page;
- (id)selection;
- (void)setDisplayBox:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateRotation;

@end

