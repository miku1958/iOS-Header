//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKArtworkImageSource-Protocol.h>

@class MKArtworkDataSourceCache, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>
{
    id<GEOTransitArtworkDataSource> _artwork;
    long long _shieldSize;
    MKArtworkDataSourceCache *_artworkCache;
}

@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork; // @synthesize artwork=_artwork;
@property (strong, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTransitArtworkViewMode:(id)arg1;

@end

