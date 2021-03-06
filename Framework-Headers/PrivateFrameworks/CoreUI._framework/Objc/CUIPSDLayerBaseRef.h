//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject
{
    CUIPSDImageRef *_imageRef;
    unsigned int _layerIndex;
}

@property (readonly) int blendMode;
@property (readonly) struct CGRect bounds;
@property (readonly) double fillOpacity;
@property (readonly) BOOL hasLayerMask;
@property (readonly) BOOL hasVectorMask;
@property (strong, nonatomic) CUIPSDImageRef *imageRef; // @synthesize imageRef=_imageRef;
@property (nonatomic) unsigned int layerIndex; // @synthesize layerIndex=_layerIndex;
@property (readonly) double opacity;
@property (readonly) BOOL visibility;

- (struct CGImage *)_createMaskFromAlphaChannel:(long long)arg1;
- (id)_psdImageRef;
- (struct CPSDLayerRecord *)_psdLayerRecord;
- (void)dealloc;
- (BOOL)isLayerGroup;
- (id)layerMaskRef;
- (id)name;
- (id)vectorMaskRef;

@end

