//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (id)nextSuggestion;
- (id)niceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

@end

