//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MADownloadOptions, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface _HKMobileAssetDownloadManager : NSObject
{
    NSMutableArray *_pendingOperations;
    NSMutableSet *_downloadingQueryParams;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_retainedSelf;
    BOOL _shouldQueryLocalAssetsFirst;
    BOOL _shouldAutoDownloadRemoteAssets;
    long long _maxNumberOfRetriesAllowed;
    NSString *_mobileAssetTypeName;
    CDUnknownBlockType _errorHandler;
    MADownloadOptions *_mobileAssetDownloadOptions;
    CDUnknownBlockType _mobileAssetDownloadCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (nonatomic) long long maxNumberOfRetriesAllowed; // @synthesize maxNumberOfRetriesAllowed=_maxNumberOfRetriesAllowed;
@property (copy, nonatomic) CDUnknownBlockType mobileAssetDownloadCompletionHandler; // @synthesize mobileAssetDownloadCompletionHandler=_mobileAssetDownloadCompletionHandler;
@property (copy, nonatomic) MADownloadOptions *mobileAssetDownloadOptions; // @synthesize mobileAssetDownloadOptions=_mobileAssetDownloadOptions;
@property (readonly, copy, nonatomic) NSString *mobileAssetTypeName; // @synthesize mobileAssetTypeName=_mobileAssetTypeName;
@property (nonatomic) BOOL shouldAutoDownloadRemoteAssets; // @synthesize shouldAutoDownloadRemoteAssets=_shouldAutoDownloadRemoteAssets;
@property (nonatomic) BOOL shouldQueryLocalAssetsFirst; // @synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst;

- (void).cxx_destruct;
- (void)_callDownloadCompletionHandlerWithAssets:(id)arg1 queryParams:(id)arg2;
- (void)_callErrorHandlerWithError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (id)_generateAssetQueryFromQueryParams:(id)arg1;
- (void)_queue_downloadAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg1 shouldRequery:(BOOL)arg2 queryParams:(id)arg3;
- (void)_queue_fetchAssetsWithQuery:(id)arg1 onlyLocal:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)description;
- (void)downloadAssetsWithQueryParams:(id)arg1;
- (void)downloadMobileAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithMobileAssetTypeName:(id)arg1 queue:(id)arg2;
- (void)removeMobileAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

