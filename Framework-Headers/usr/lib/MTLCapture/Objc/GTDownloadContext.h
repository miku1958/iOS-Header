//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLBlitCommandEncoder, MTLCommandBuffer, MTLCommandQueue;

@interface GTDownloadContext : NSObject
{
    id<MTLCommandQueue> _queue;
    id<MTLCommandBuffer> _command;
    id<MTLBlitCommandEncoder> _blit;
    NSMutableArray *_MTLResources;
    NSMutableArray *_originalMTLResources;
    struct apr_pool_t *_pool;
    unsigned long long _blitRequestCount;
    struct apr_array_header_t *_requests;
    NSMutableArray *_objects;
    unsigned long long _usedGPUMemory;
}

@property (strong, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property (nonatomic) struct apr_array_header_t *requests; // @synthesize requests=_requests;
@property (nonatomic) unsigned long long usedGPUMemory; // @synthesize usedGPUMemory=_usedGPUMemory;

- (void).cxx_destruct;
- (id)blitCommandEncoder;
- (void)dealloc;
- (void)flush;
- (void)flushWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 forRequest:(struct apr_array_header_t *)arg2;
- (id)newCommandBuffer;
- (void)retainMTLResource:(id)arg1;

@end

