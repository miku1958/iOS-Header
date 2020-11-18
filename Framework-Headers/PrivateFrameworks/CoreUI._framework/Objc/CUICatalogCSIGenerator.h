//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CSIGenerator.h>

@class CSIBitmapWrapper, CUIRenditionKey;

__attribute__((visibility("hidden")))
@interface CUICatalogCSIGenerator : CSIGenerator
{
    CUIRenditionKey *_baseKey;
    CSIBitmapWrapper *_flattenedBitmap;
}

@property (strong, nonatomic) CUIRenditionKey *baseKey; // @synthesize baseKey=_baseKey;
@property (strong, nonatomic) CSIBitmapWrapper *flattenedBitmap; // @synthesize flattenedBitmap=_flattenedBitmap;

- (void)addLayerReference:(id)arg1 withImage:(struct CGImage *)arg2;
- (void)dealloc;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize)arg2 isOpaque:(BOOL)arg3;

@end
