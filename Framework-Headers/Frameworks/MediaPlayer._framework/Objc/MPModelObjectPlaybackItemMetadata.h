//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@class MPModelObject, MPModelSong, NSObject;
@protocol MPModelObjectPlaybackItemMetadataDelegate, OS_dispatch_queue;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata
{
    MPModelSong *_song;
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
    MPModelObject *_modelObject;
}

@property (strong, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
@property (weak, nonatomic) id<MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate; // @synthesize modelObjectDelegate=_modelObjectDelegate;

+ (id)_requiredPlaylistEntryProperties;
+ (id)_requiredSongProperties;
+ (BOOL)_shouldRespectMusicCellularDataSetting;
+ (BOOL)_shouldRespectStoreCellularDataSetting;
+ (id)requiredPropertiesForModelObjectClass:(Class)arg1;
- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(BOOL *)arg4;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (BOOL)allowsAssetCaching;
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
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localNetworkContentURL;
- (id)mediaItem;
- (long long)mediaLibraryPersistentID;
- (id)modelSong;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldRememberBookmarkTime;
- (BOOL)shouldReportPlayEventsToStore;
- (BOOL)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (float)volumeNormalization;

@end

