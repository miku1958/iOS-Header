//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIQuadView;

@interface CLKUIQuad : NSObject
{
    BOOL _opaque;
    CLKUIQuadView *_quadView;
}

@property (nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
@property (weak, nonatomic) CLKUIQuadView *quadView; // @synthesize quadView=_quadView;

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (id)init;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (BOOL)prepareForTime:(double)arg1;
- (void)purge;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (void)unlinkQuadView;

@end
