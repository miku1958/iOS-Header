//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, EAGLSharegroup, NSBundle;

@interface NURenderer : NSObject
{
    EAGLContext *_context;
    EAGLSharegroup *_shareGroup;
    NSBundle *_bundle;
    struct NURendererResources _resources;
    unsigned int _initalizedProgams:1;
    unsigned int _initalizedHemi:1;
    unsigned int _initalizedTextures:1;
    unsigned int _initalized:1;
    struct _NUGeometryRange _octahedronGeomRange;
    struct _NUGeometryRange _quadGeomRange;
}

@property (readonly, nonatomic) EAGLSharegroup *shareGroup; // @synthesize shareGroup=_shareGroup;

+ (void)_deallocInstance;
+ (void)prime;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (BOOL)_initHemi;
- (BOOL)_initPrograms;
- (BOOL)_initTextures;
- (void)_loadTexture:(unsigned long long)arg1;
- (void)_prime;
- (void)_purge;
- (void)_renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2 prime:(BOOL)arg3;
- (void)_requireTexture:(unsigned long long)arg1 sync:(BOOL)arg2;
- (unsigned int)createVertexArray;
- (void)dealloc;
- (id)init;
- (void)purge;
- (void)renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2;
- (id)snapshot:(id)arg1 size:(struct CGSize)arg2;

@end

