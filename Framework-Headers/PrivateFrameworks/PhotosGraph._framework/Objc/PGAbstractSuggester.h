//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGSuggester-Protocol.h>

@class NSString, PGSuggestionSession;

@interface PGAbstractSuggester : NSObject <PGSuggester>
{
    BOOL _lastSuggestionWasColliding;
    PGSuggestionSession *_session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL lastSuggestionWasColliding; // @synthesize lastSuggestionWasColliding=_lastSuggestionWasColliding;
@property (weak, nonatomic) PGSuggestionSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (BOOL)assetIsValidForSuggesting:(id)arg1;
+ (id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)arg1;
+ (BOOL)lastSuggestionWasColliding;
+ (id)noVideoPredicate;
+ (BOOL)processedAssetIsValidForSuggesting:(id)arg1;
+ (void)setLastSuggestionWasColliding:(BOOL)arg1;
+ (id)sharingSuggestionResultsForMomentNodes:(id)arg1;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(BOOL *)arg3;
+ (id)suggesterWithSession:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

@end

