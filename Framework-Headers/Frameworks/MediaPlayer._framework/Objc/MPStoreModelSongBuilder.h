//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelSongBuilder : MPStoreModelObjectBuilder
{
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int duration:1;
        unsigned int trackNumber:1;
        unsigned int discNumber:1;
        unsigned int grouping:1;
        unsigned int explicit:1;
        unsigned int artistUploadedContent:1;
        unsigned int hasVideo:1;
        unsigned int artwork:1;
        unsigned int copyrightText:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int hasCloudSyncSource:1;
        unsigned int localFileAsset:1;
        unsigned int libraryAdded:1;
        unsigned int libraryAddEligible:1;
        unsigned int shouldShowComposer:1;
        unsigned int volumeNormalization:1;
        unsigned int year:1;
        unsigned int userRating:1;
        unsigned int classicalWork:1;
        unsigned int classicalMovement:1;
        unsigned int classicalMovementCount:1;
        unsigned int classicalMovementNumber:1;
        struct {
            unsigned int identifiers:1;
            unsigned int title:1;
            unsigned int releaseDate:1;
            unsigned int year:1;
            unsigned int artist:1;
        } album;
        CDStruct_63a3d127 artist;
        CDStruct_63a3d127 composer;
        CDStruct_63a3d127 genre;
        struct {
            unsigned int identifiers:1;
        } homeSharingAsset;
        struct {
            unsigned int identifiers:1;
            unsigned int text:1;
            unsigned int hasStoreLyrics:1;
        } lyrics;
    } _requestedSongProperties;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

