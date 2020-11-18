//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicStoreModelObjectBuilder.h>

@interface MusicStoreModelPlaylistBuilder : MusicStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int trackCount:1;
        unsigned int editorNotes:1;
        unsigned int releaseDate:1;
        unsigned int artwork:1;
        unsigned int editorialArtwork:1;
        unsigned int tracksArtworks:1;
        CDStruct_63a3d127 curator;
    } _requestedPlaylistProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

