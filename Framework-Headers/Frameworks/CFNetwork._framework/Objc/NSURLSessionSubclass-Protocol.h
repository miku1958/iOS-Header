//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class AVURLAsset, NSData, NSDictionary, NSString, NSURL, NSURLRequest, NSURLSessionAVAssetDownloadTask, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionUploadTask;

@protocol NSURLSessionSubclass <NSObject>
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void (^)(void))arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(void (^)(void))arg1;
- (NSURLSessionDataTask *)dataTaskForRequest:(NSURLRequest *)arg1 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (NSURLSessionDownloadTask *)downloadTaskForRequest:(NSURLRequest *)arg1 downloadFilePath:(NSString *)arg2 resumeData:(NSData *)arg3 completion:(void (^)(NSURL *, NSURLResponse *, NSError *))arg4;
- (NSURLSessionUploadTask *)uploadTaskForRequest:(NSURLRequest *)arg1 uploadFile:(NSURL *)arg2 bodyData:(NSData *)arg3 completion:(void (^)(NSData *, NSURLResponse *, NSError *))arg4;
@end

