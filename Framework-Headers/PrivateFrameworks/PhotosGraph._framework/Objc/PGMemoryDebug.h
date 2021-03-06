//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PGMoodVector;

@interface PGMemoryDebug : NSObject
{
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_eventKeywords;
    NSDictionary *_additionalInfoKeywords;
    double _contentScore;
    double _meanContentScore;
    double _matchingScore;
    double _graphScore;
    double _neighborScore;
    NSArray *_meaningLabels;
    double _collectionMeaningScore;
    double _collectionContentScore;
    NSArray *_collectionMeaningLabels;
    unsigned long long _numberOfPeople;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfCollections;
    unsigned long long _numberOfRelevantAssets;
    unsigned long long _suggestedMood;
    unsigned long long _recommendedMoods;
    unsigned long long _forbiddenMoods;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    NSArray *_moodKeywords;
}

@property (strong, nonatomic) NSDictionary *additionalInfoKeywords; // @synthesize additionalInfoKeywords=_additionalInfoKeywords;
@property (nonatomic) double collectionContentScore; // @synthesize collectionContentScore=_collectionContentScore;
@property (strong, nonatomic) NSArray *collectionMeaningLabels; // @synthesize collectionMeaningLabels=_collectionMeaningLabels;
@property (nonatomic) double collectionMeaningScore; // @synthesize collectionMeaningScore=_collectionMeaningScore;
@property (nonatomic) double contentScore; // @synthesize contentScore=_contentScore;
@property (strong, nonatomic) NSDictionary *eventKeywords; // @synthesize eventKeywords=_eventKeywords;
@property (nonatomic) unsigned long long forbiddenMoods; // @synthesize forbiddenMoods=_forbiddenMoods;
@property (nonatomic) double graphScore; // @synthesize graphScore=_graphScore;
@property (strong, nonatomic) PGMoodVector *historyWeightedPositiveMoodVector; // @synthesize historyWeightedPositiveMoodVector=_historyWeightedPositiveMoodVector;
@property (strong, nonatomic) NSDictionary *matchingKeywords; // @synthesize matchingKeywords=_matchingKeywords;
@property (nonatomic) double matchingScore; // @synthesize matchingScore=_matchingScore;
@property (nonatomic) double meanContentScore; // @synthesize meanContentScore=_meanContentScore;
@property (strong, nonatomic) NSArray *meaningLabels; // @synthesize meaningLabels=_meaningLabels;
@property (strong, nonatomic) NSArray *moodKeywords; // @synthesize moodKeywords=_moodKeywords;
@property (strong, nonatomic) PGMoodVector *negativeMoodVector; // @synthesize negativeMoodVector=_negativeMoodVector;
@property (nonatomic) double neighborScore; // @synthesize neighborScore=_neighborScore;
@property (nonatomic) unsigned long long numberOfCollections; // @synthesize numberOfCollections=_numberOfCollections;
@property (nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property (nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property (nonatomic) unsigned long long numberOfRelevantAssets; // @synthesize numberOfRelevantAssets=_numberOfRelevantAssets;
@property (strong, nonatomic) PGMoodVector *positiveMoodVector; // @synthesize positiveMoodVector=_positiveMoodVector;
@property (nonatomic) unsigned long long recommendedMoods; // @synthesize recommendedMoods=_recommendedMoods;
@property (strong, nonatomic) NSDictionary *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property (nonatomic) unsigned long long suggestedMood; // @synthesize suggestedMood=_suggestedMood;

- (void).cxx_destruct;

@end

