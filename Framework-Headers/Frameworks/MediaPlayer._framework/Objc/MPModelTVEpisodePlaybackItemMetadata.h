//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelTVEpisode *_episode;
}

@property (strong, nonatomic) MPModelTVEpisode *episode; // @synthesize episode=_episode;

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
- (id)contentTitle;
- (unsigned long long)contentType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (id)localFileAsset;
- (id)mediaItem;
- (id)modelGenericObject;
- (id)playbackPosition;
- (long long)storeAdamID;
- (id)storeAsset;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;

@end

