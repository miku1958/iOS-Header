//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMAssetResolver-Protocol.h>

@class NSURLSession;
@protocol OS_dispatch_queue;

@interface RMAssetResolver : NSObject <RMAssetResolver>
{
    NSURLSession *_URLSession;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property (strong, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;

- (void).cxx_destruct;
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;
- (BOOL)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (id)dataTaskWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithURLSession:(id)arg1;
- (id)initWithURLSessionConfiguration:(id)arg1;
- (void)resolveAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)userAgent;

@end
