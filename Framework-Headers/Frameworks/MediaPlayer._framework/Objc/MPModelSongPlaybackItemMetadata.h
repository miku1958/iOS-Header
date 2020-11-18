//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObjectPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelSong;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelSong *_song;
}

@property (strong, nonatomic) MPModelSong *song; // @synthesize song=_song;

+ (id)requiredProperties;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)homeSharingAsset;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (id)localFileAsset;
- (id)mediaItem;
- (id)modelGenericObject;
- (id)playbackPosition;
- (BOOL)showComposer;
- (long long)storeAdamID;
- (id)storeAsset;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (float)volumeNormalization;

@end

