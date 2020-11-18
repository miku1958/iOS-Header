//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary *_registry;
}

+ (id)sharedRegistry;
- (void)dealloc;
- (id)init;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)rendererDidChange:(id)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3;

@end

