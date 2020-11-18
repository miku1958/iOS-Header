//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation
{
    NSDictionary *_storeBagDictionary;
}

- (void).cxx_destruct;
- (id)_produceResponseWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 storeItemMetadataResults:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1;
- (id)recommendationsURLWithStoreBagDictionary:(id)arg1;

@end
