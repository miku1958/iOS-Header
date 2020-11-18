//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryMediaItem_iOS.h>

#import <VideosUI/TVPContentKeyLoading-Protocol.h>
#import <VideosUI/TVPMediaItemReportingDelegate-Protocol.h>
#import <VideosUI/VUIStoreFPSKeyLoaderDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, VUIStoreDownloadMonitor, VUIStoreFPSKeyLoader;

__attribute__((visibility("hidden")))
@interface VUIStoreMediaItem_iOS : VUILibraryMediaItem_iOS <TVPMediaItemReportingDelegate, TVPContentKeyLoading, VUIStoreFPSKeyLoaderDelegate>
{
    BOOL _needsRentalCheckin;
    NSNumber *_startTime;
    NSURL *_fpsCertificateURL;
    NSURL *_fpsKeyServerURL;
    NSDictionary *_fpsAdditionalServerParams;
    unsigned long long _loadingContext;
    NSDictionary *_sinfsDict;
    NSNumber *_fileSize;
    NSURL *_downloadDestinationURL;
    NSNumber *_downloadToken;
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;
    long long _playbackType;
    NSURL *_playbackURL;
    VUIStoreDownloadMonitor *_downloadMonitor;
    NSObject *_parentReportingToken;
    NSString *_alternateAssetURLString;
    NSError *_fpsKeyError;
}

@property (strong, nonatomic) NSString *alternateAssetURLString; // @synthesize alternateAssetURLString=_alternateAssetURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSURL *downloadDestinationURL; // @synthesize downloadDestinationURL=_downloadDestinationURL;
@property (strong, nonatomic) VUIStoreDownloadMonitor *downloadMonitor; // @synthesize downloadMonitor=_downloadMonitor;
@property (strong, nonatomic) NSNumber *downloadToken; // @synthesize downloadToken=_downloadToken;
@property (strong, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // @synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams;
@property (copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
@property (strong, nonatomic) NSError *fpsKeyError; // @synthesize fpsKeyError=_fpsKeyError;
@property (copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property (nonatomic) BOOL needsRentalCheckin; // @synthesize needsRentalCheckin=_needsRentalCheckin;
@property (strong, nonatomic) NSObject *parentReportingToken; // @synthesize parentReportingToken=_parentReportingToken;
@property (nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property (strong, nonatomic) NSURL *playbackURL; // @synthesize playbackURL=_playbackURL;
@property (strong, nonatomic) NSDictionary *sinfsDict; // @synthesize sinfsDict=_sinfsDict;
@property (nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // @synthesize storeFPSKeyLoader=_storeFPSKeyLoader;
@property (readonly, nonatomic, getter=isStreamingHLS) BOOL streamingHLS;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_adamIDString;
- (BOOL)_allowedToPlayWhileOnCellularNetwork;
- (void)_checkInRental;
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)arg1 startPlaybackClock:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_configureForLocalPlaybackWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureForPlaybackFromExistingDownload:(id)arg1 downloadManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_configureForStreamingPlaybackWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteDownloadKeyCookieForURL:(id)arg1;
- (id)_downloadForThisMediaItemReturningDownloadManager:(id *)arg1;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (id)_iTunesStoreContentInfo;
- (id)_iTunesStoreContentPurchasedMediaKind;
- (BOOL)_loadingCancelled:(unsigned long long)arg1;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;
- (void)_performStreamingRedownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_persistOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2;
- (id)_rentalEndDate;
- (id)_rentalExpirationDate;
- (id)_rentalPlaybackEndDate;
- (void)_setDownloadKeyCookieWithURL:(id)arg1 downloadKey:(id)arg2;
- (void)_updateRentalPlaybackStartDate:(id)arg1;
- (void)_userPlaybackSettingsDidChange:(id)arg1;
- (id)_videoPlaybackTypeDescription;
- (void)cleanUpMediaItem;
- (void)dealloc;
- (BOOL)hasTrait:(id)arg1;
- (id)initWithAdamID:(long long)arg1;
- (id)initWithMPMediaItem:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (id)reportingDelegate;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;

@end

