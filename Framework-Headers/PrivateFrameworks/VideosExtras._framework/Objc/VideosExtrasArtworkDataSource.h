//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)init;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (BOOL)wantsBackgroundImageDecompression;

@end

