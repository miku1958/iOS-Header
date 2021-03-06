//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSDictionary *_assetUUIDsByScore;
    NSArray *_sortedScores;
    long long _currentScoreIndex;
    NSEnumerator *_currentSuggestedAssetEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (id)assetPredicate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3;
- (BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withProgress:(CDUnknownBlockType)arg3;
- (id)nextSuggestedAssetEnumeratorWithProgress:(CDUnknownBlockType)arg1;
- (id)nextSuggestedAssetWithProgress:(CDUnknownBlockType)arg1;
- (id)nextSuggestionWithProgress:(CDUnknownBlockType)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (void)reset;
- (unsigned long long)scoreWithAsset:(id)arg1;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

@end

