//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSURLRequest, NSUUID;

@protocol NDBackgroundSessionProtocol <NSObject>
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5 childDownloadSessionIdentifier:(NSString *)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(NSUUID *)arg8 reply:(void (^)(BOOL))arg9;
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(NSURL *)arg2 destinationURL:(NSURL *)arg3 temporaryDestinationURL:(NSURL *)arg4 assetTitle:(NSString *)arg5 assetArtworkData:(NSData *)arg6 options:(NSDictionary *)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(NSUUID *)arg9 reply:(void (^)(BOOL))arg10;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(void (^)(NSData *))arg2;
- (void)dataTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(NSUUID *)arg4 reply:(void (^)(BOOL))arg5;
- (void)downloadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 downloadFilePath:(NSString *)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(NSUUID *)arg5 reply:(void (^)(BOOL))arg6;
- (void)downloadTaskWithResumeData:(NSData *)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(NSUUID *)arg3 reply:(void (^)(BOOL))arg4;
- (void)invalidateWithReply:(void (^)(void))arg1;
- (void)resetStorageWithReply:(void (^)(void))arg1;
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2;
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setDescription:(NSString *)arg1 forTask:(unsigned long long)arg2;
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(NSDictionary *)arg2 propKey:(NSString *)arg3 withReply:(void (^)(BOOL))arg4;
- (void)setTLSSessionCachePrefix:(NSString *)arg1;
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;
- (void)uploadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 fromFile:(NSURL *)arg3 sandboxExtensionData:(NSData *)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(NSUUID *)arg6 potentialCredentials:(NSDictionary *)arg7 reply:(void (^)(BOOL))arg8;
@end
