//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject
{
    IOSurface *_surface;
    double _contentsScale;
    struct CGColorSpace *_destinationColorSpaceOverride;
    struct CGRect _frame;
    struct CGAffineTransform _transform;
}

@property (readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property (readonly, nonatomic) struct CGColorSpace *destinationColorSpaceOverride; // @synthesize destinationColorSpaceOverride=_destinationColorSpaceOverride;
@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, nonatomic) IOSurface *surface; // @synthesize surface=_surface;
@property (readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSurface:(id)arg1 frame:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 contentsScale:(double)arg4 destinationColorSpaceOverride:(struct CGColorSpace *)arg5;

@end

