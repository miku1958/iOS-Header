//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder, NSMapTable;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder
{
    NSMapTable *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    BOOL _shouldUsePlaylistEntry;
    BOOL _shouldUseUniqueContentItemIDs;
}

@property (nonatomic) BOOL shouldUsePlaylistEntry; // @synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry;
@property (nonatomic) BOOL shouldUseUniqueContentItemIDs; // @synthesize shouldUseUniqueContentItemIDs=_shouldUseUniqueContentItemIDs;

- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end

