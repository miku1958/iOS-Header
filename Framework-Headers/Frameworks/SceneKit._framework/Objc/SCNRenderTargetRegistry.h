//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol SCNRenderContext;

@interface SCNRenderTargetRegistry : NSObject
{
    id<SCNRenderContext> _renderContext;
    NSMutableDictionary *_renderTargets;
    NSMutableDictionary *_nameToRenderTarget;
    NSMutableArray *_purgeArray;
    long long _frameStamp;
}

@property (readonly, nonatomic) long long numberOfRenderTargets;

- (void)_purgeWithReason:(int)arg1;
- (void)bumpTimeStamp;
- (void)cleanup;
- (void)dealloc;
- (void)finalizeFrame;
- (id)initWithRenderContext:(id)arg1;
- (void)purge;
- (void)purgeRenderTargetsMatchingFrameBuffer;
- (void)releaseRenderTarget:(id)arg1;
- (void)releaseRenderTargetNamed:(id)arg1;
- (void)releaseTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (id)renderTargetWithDescription:(CDStruct_fd8065c6)arg1 size:(long long)arg2 arrayLength:(id)arg3 name:(long long)arg4 useCount: /* Error: Ran out of types for this method. */;
- (id)renderTargetWithName:(id)arg1;
- (void)retainTextureWithName:(id)arg1 retainCount:(long long)arg2;
- (void)viewportDidResize;

@end

