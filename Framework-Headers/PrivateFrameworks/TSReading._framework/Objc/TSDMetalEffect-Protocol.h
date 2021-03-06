//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDMetalContext, TSDTexturedRectangle;
@protocol MTLRenderCommandEncoder;

@protocol TSDMetalEffect <NSObject>

@property (nonatomic) double opacity;
@property (nonatomic) TSDTexturedRectangle *texture;


@optional
- (void)renderEffectAtPercent:(double)arg1 atBufferIndex:(unsigned long long)arg2 withEncoder:(id<MTLRenderCommandEncoder>)arg3;
- (void)renderEffectAtPercent:(double)arg1 withContext:(TSDMetalContext *)arg2;
@end

