//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol VCPStorageServiceProtocol
- (void)registerClient:(NSString *)arg1 forPhotoLibraryURL:(NSURL *)arg2 withReply:(void (^)(NSString *))arg3;
- (void)storeAnalysis:(NSDictionary *)arg1 forAsset:(NSString *)arg2 fromPhotoLibraryURL:(NSURL *)arg3 withReply:(void (^)(void))arg4;
@end
