//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol SCNRenderContext;

__attribute__((visibility("hidden")))
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
- (void)releaseRenderTarget:(id)arg1;
- (void)releaseRenderTargetNamed:(id)arg1 passIdentifier:(long long)arg2;
- (void)releaseTextureWithName:(id)arg1 passIdentifier:(long long)arg2 retainCount:(long long)arg3;
- (id)renderTargetWithDescription:(CDStruct_2e3d5ba3)arg1 size:(id)arg2 name:(long long)arg3 passIdentifier:(long long)arg4 useCount: /* Error: Ran out of types for this method. */;
- (id)renderTargetWithName:(id)arg1 passIdentifier:(long long)arg2;
- (void)retainTextureWithName:(id)arg1 passIdentifier:(long long)arg2 retainCount:(long long)arg3;
- (void)viewportDidResize;

@end
