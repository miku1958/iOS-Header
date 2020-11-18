//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSURLSessionDataDelegate-Protocol.h>

@class AVWeakReference, NSOperationQueue, NSString;

@interface AVAssetResourceLoaderURLSessionDataDelegateForCustomURLLoader : NSObject <NSURLSessionDataDelegate>
{
    AVWeakReference *_weakReferenceToLoader;
    NSOperationQueue *_opQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithResourceLoader:(id)arg1;
- (void)invokeFigAssetDelegateWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

