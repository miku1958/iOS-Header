//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelMovieMediaClipBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int previewArtwork:1;
        struct {
            unsigned int identifiers:1;
            unsigned int duration:1;
            unsigned int flavorType:1;
            unsigned int mediaType:1;
            unsigned int url:1;
        } staticAssets;
    } _requestedClipProperties;
}

+ (id)allSupportedProperties;
- (id)mediaClipWithStoreItemMetadata:(id)arg1 storeItemMovieClip:(id)arg2;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

