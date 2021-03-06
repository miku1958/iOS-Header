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
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;
- (id)_produceResultsWithItemsArray:(id)arg1;
- (id)_produceResultsWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2;
- (id)_recommendationGroupBuilder;
- (id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg1;
- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (id)displayFilterKindsValueForOptions:(long long)arg1;
- (BOOL)isOnboardingRequired:(id)arg1;
- (id)itemProperties;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queryItemsWithStoreBagDictionary:(id)arg1;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1;
- (id)recommendationsURLWithStoreBagDictionary:(id)arg1;
- (id)sectionProperties;
- (id)typesArrayWithTypes:(long long)arg1;

@end

