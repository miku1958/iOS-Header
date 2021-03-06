//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol PLAssetsdCloudServiceProtocol <NSObject>
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(NSArray *)arg1 doneTokens:(NSArray *)arg2 format:(unsigned long long)arg3 reply:(void (^)(BOOL, NSArray *, NSError *))arg4;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)cancelCPLDownloadTaskWithIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)computeFingerPrintsOfAssetWithObjectURI:(NSURL *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(NSURL *)arg1 taskIdentifier:(NSString *)arg2 resourceType:(unsigned long long)arg3 HighPriority:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 downloadIsTransient:(BOOL)arg6 reply:(void (^)(BOOL, NSString *, NSString *, NSError *))arg7;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(NSURL *)arg1 mediaAssetType:(unsigned long long)arg2 reply:(void (^)(BOOL, NSURL *, NSError *))arg3;
@end

