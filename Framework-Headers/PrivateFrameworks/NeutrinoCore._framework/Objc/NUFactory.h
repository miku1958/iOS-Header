//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUCacheNodeRegistry, NUGLContext, NUGLContextPool, NUJSContextPool, NUPlatform, NUPurgeableStoragePool, NURenderNodeCache, NURenderPipelineRegistry, NUScheduler, NUSchemaRegistry;
@protocol NUStorageFactory;

@interface NUFactory : NSObject
{
    NUSchemaRegistry *_schemaRegistry;
    NURenderPipelineRegistry *_renderPipelineRegistry;
    NSString *_defaultNameSpace;
    NUScheduler *_scheduler;
    NUPurgeableStoragePool *_bufferStoragePool;
    NUPurgeableStoragePool *_surfaceStoragePool;
    id<NUStorageFactory> _bufferFactory;
    id<NUStorageFactory> _surfaceFactory;
    NUGLContext *_sharedOpenGLContext;
    NUGLContextPool *_sharedOpenGLContextPool;
    NURenderNodeCache *_renderNodeCache;
    NUPlatform *_platform;
    NUJSContextPool *_sharedJavaScriptContextPool;
    NUCacheNodeRegistry *_cacheNodeRegistry;
}

@property (strong, nonatomic) id<NUStorageFactory> bufferFactory; // @synthesize bufferFactory=_bufferFactory;
@property (strong, nonatomic) NUPurgeableStoragePool *bufferStoragePool; // @synthesize bufferStoragePool=_bufferStoragePool;
@property (strong, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry; // @synthesize cacheNodeRegistry=_cacheNodeRegistry;
@property (copy, nonatomic) NSString *defaultNameSpace; // @synthesize defaultNameSpace=_defaultNameSpace;
@property (strong, nonatomic) NUPlatform *platform; // @synthesize platform=_platform;
@property (strong, nonatomic) NURenderNodeCache *renderNodeCache; // @synthesize renderNodeCache=_renderNodeCache;
@property (strong, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry; // @synthesize renderPipelineRegistry=_renderPipelineRegistry;
@property (strong, nonatomic) NUScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property (strong, nonatomic) NUSchemaRegistry *schemaRegistry; // @synthesize schemaRegistry=_schemaRegistry;
@property (strong, nonatomic) NUJSContextPool *sharedJavaScriptContextPool; // @synthesize sharedJavaScriptContextPool=_sharedJavaScriptContextPool;
@property (strong, nonatomic) NUGLContext *sharedOpenGLContext; // @synthesize sharedOpenGLContext=_sharedOpenGLContext;
@property (strong, nonatomic) NUGLContextPool *sharedOpenGLContextPool; // @synthesize sharedOpenGLContextPool=_sharedOpenGLContextPool;
@property (strong, nonatomic) id<NUStorageFactory> surfaceFactory; // @synthesize surfaceFactory=_surfaceFactory;
@property (strong, nonatomic) NUPurgeableStoragePool *surfaceStoragePool; // @synthesize surfaceStoragePool=_surfaceStoragePool;

+ (void)reset;
+ (void)setSharedFactory:(id)arg1;
+ (id)sharedFactory;
- (void).cxx_destruct;
- (void)shutdown;
- (void)start;

@end

