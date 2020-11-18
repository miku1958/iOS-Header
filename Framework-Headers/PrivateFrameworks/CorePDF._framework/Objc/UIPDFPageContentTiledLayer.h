//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATiledLayer.h>

#import <CorePDF/UIPDFSelectionLayer-Protocol.h>

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer>
{
    CALayer *_selectionLayer;
}

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;

@end
