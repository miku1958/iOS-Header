//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUModelObject.h>

@class MPUModelArtist, MPUModelGenre, NSString;

@interface MPUModelMusicVideo : MPUModelObject
{
    BOOL _explicitMusicVideo;
    BOOL _artistUploadedContent;
    NSString *_title;
    MPUModelArtist *_artist;
    MPUModelGenre *_genre;
    double _duration;
    CDUnknownBlockType _artworkCatalogBlock;
}

@property (strong, nonatomic) MPUModelArtist *artist; // @synthesize artist=_artist;
@property (nonatomic, getter=isArtistUploadedContent) BOOL artistUploadedContent; // @synthesize artistUploadedContent=_artistUploadedContent;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic, getter=isExplicitMusicVideo) BOOL explicitMusicVideo; // @synthesize explicitMusicVideo=_explicitMusicVideo;
@property (strong, nonatomic) MPUModelGenre *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)__artistUploadedContent__KEY;
+ (id)__artist__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__duration__KEY;
+ (id)__explicitMusicVideo__KEY;
+ (id)__genre__KEY;
+ (id)__title__KEY;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(unsigned long long)arg1;

@end

