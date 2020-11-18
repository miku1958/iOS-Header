//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAEAGLLayer;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeDirectGLRenderingContext : NSObject
{
    CAEAGLLayer *_glLayer;
    double _contentsScale;
    struct CGAffineTransform _transform;
}

@property (readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property (readonly, nonatomic) CAEAGLLayer *glLayer; // @synthesize glLayer=_glLayer;
@property (readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;

- (void).cxx_destruct;
- (id)initWithGLLayer:(id)arg1 withTransform:(struct CGAffineTransform)arg2 andContentsScale:(double)arg3;

@end

