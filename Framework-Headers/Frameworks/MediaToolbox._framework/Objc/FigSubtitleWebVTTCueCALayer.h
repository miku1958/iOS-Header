//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaToolbox/FigSubtitleBackdropCALayer.h>

#import <MediaToolbox/CALayerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer <CALayerDelegate>
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct __CFString *)getContentID;
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;
- (id)init;
- (unsigned char)isDirty;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setContent:(struct __CFAttributedString *)arg1;
- (void)setCuePosition:(struct CGPoint)arg1;
- (void)setDefaultFontSize:(double)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;
- (void)setViewport:(struct CGRect)arg1;

@end

