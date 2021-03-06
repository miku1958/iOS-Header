//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject
{
    struct os_unfair_lock_s _programMutex;
    struct __CFDictionary *_shaders;
    struct __CFDictionary *_trackedResourcesToHashcode;
}

@property (readonly, nonatomic) int profile;

+ (id)deferredGeneratorWithProfile:(int)arg1;
+ (id)generatorWithProfile:(int)arg1;
- (void)dealloc;
- (void)emptyShaderCache;
- (id)init;
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;
- (void)releaseProgramForResource:(id)arg1;

@end

