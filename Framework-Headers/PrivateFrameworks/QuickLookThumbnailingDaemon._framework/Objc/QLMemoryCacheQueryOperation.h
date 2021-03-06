//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, QLTGeneratorThumbnailRequest, _QLCacheThread;
@protocol OS_dispatch_queue;

@interface QLMemoryCacheQueryOperation : NSOperation
{
    QLTGeneratorThumbnailRequest *_generatorRequest;
    _QLCacheThread *_cacheThread;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong) QLTGeneratorThumbnailRequest *generatorRequest; // @synthesize generatorRequest=_generatorRequest;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithThumbnailRequest:(id)arg1 cacheThread:(id)arg2;
- (void)main;

@end

