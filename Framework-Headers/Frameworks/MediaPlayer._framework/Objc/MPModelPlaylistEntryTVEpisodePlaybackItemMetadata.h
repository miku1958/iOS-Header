//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

@property (strong, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;

+ (id)requiredProperties;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)episode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)modelGenericObject;
- (void)setEpisode:(id)arg1;

@end

