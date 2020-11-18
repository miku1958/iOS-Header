//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPMediaItem, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasValidMediaItemValuesForProperties;
    MPMediaItem *_mediaItem;
    NSDictionary *_mediaItemValuesForProperties;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (strong, nonatomic) MPMediaItem *mediaItem;

+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)_lowQualityCachedAssetDestinationDirectory;
+ (id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7;
- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(BOOL *)arg4;
- (void)_invalidateMediaItemProperties;
- (id)_mediaItemValuesForProperties;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(BOOL *)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (void)dealloc;
- (long long)downloadIdentifier;
- (long long)endpointType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (id)init;
- (id)initWithMediaItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (id)modelSong;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldReportPlayEventsToStore;
- (BOOL)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (float)volumeNormalization;

@end

