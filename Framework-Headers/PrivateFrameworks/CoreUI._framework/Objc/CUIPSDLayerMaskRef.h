//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIPSDLayerRef;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (struct CGRect)bounds;
- (struct CGImage *)createCGImageMask;
- (void)dealloc;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isLinked;
- (id)layerRef;
- (struct CGPath *)newBezierPath;
- (struct CGPath *)newBezierPathAtScale:(double)arg1;

@end
