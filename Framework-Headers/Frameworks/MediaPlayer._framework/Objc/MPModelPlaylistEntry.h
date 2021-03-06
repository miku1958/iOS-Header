//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPArtworkCatalog, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPModelSong, MPModelTVEpisode;

@interface MPModelPlaylistEntry : MPModelObject
{
}

@property (strong, nonatomic) MPArtworkCatalog *_artworkCatalog; // @dynamic _artworkCatalog;
@property (strong, nonatomic) MPModelMovie *movie; // @dynamic movie;
@property (strong, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property (nonatomic) long long position; // @dynamic position;
@property (strong, nonatomic) MPModelSocialPerson *socialContributor; // @dynamic socialContributor;
@property (strong, nonatomic) MPModelSong *song; // @dynamic song;
@property (strong, nonatomic) MPModelTVEpisode *tvEpisode; // @dynamic tvEpisode;

+ (id)___artworkCatalog_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)__song_KEY;
+ (id)__tvEpisode_KEY;
+ (id)kindWithKinds:(id)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;
- (id)anyObject;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (long long)type;

@end

