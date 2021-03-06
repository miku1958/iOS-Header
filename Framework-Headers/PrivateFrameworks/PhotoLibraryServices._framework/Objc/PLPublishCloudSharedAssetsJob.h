//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob
{
    BOOL _isNewAlbum;
    NSString *_publishAlbumCloudGUID;
    NSArray *_originalAssetUUIDs;
    NSArray *_stillImageOnlyAssetUUIDs;
    NSDictionary *_customExportsInfo;
    NSDictionary *_trimmedVideoPathInfo;
    NSString *_batchCommentText;
}

@property (strong, nonatomic) NSString *batchCommentText; // @synthesize batchCommentText=_batchCommentText;
@property (strong, nonatomic) NSDictionary *customExportsInfo; // @synthesize customExportsInfo=_customExportsInfo;
@property (nonatomic) BOOL isNewAlbum; // @synthesize isNewAlbum=_isNewAlbum;
@property (strong, nonatomic) NSArray *originalAssetUUIDs; // @synthesize originalAssetUUIDs=_originalAssetUUIDs;
@property (strong, nonatomic) NSString *publishAlbumCloudGUID; // @synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID;
@property (strong, nonatomic) NSArray *stillImageOnlyAssetUUIDs; // @synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs;
@property (strong, nonatomic) NSDictionary *trimmedVideoPathInfo; // @synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo;

+ (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(BOOL)arg6 batchCommentText:(id)arg7;
+ (id)videoComplementURLForSharingFromAsset:(id)arg1;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)retrieveURLsFromAsset:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id *)arg3 videoComplementURL:(id *)arg4;
- (void)run;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;

@end

