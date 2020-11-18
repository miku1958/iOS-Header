//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

@interface IPFeatureScanner : NSObject
{
    NSArray *_bodyMessageUnits;
    NSMutableArray *_bodyAllFeatures;
    NSMutableArray *_bodyDataDetectorsFeatures;
    NSMutableArray *_bodyKeywordFeatures;
    NSMutableArray *_bodySentenceFeatures;
    NSMutableArray *_detectedEvents;
    NSArray *_stitchedEvents;
    NSArray *_filteredDetectedEvents;
    unsigned long long _resultType;
    NSMutableSet *_extractedNotesStrings;
}

@property (strong) NSMutableArray *bodyAllFeatures; // @synthesize bodyAllFeatures=_bodyAllFeatures;
@property (strong) NSMutableArray *bodyDataDetectorsFeatures; // @synthesize bodyDataDetectorsFeatures=_bodyDataDetectorsFeatures;
@property (strong) NSMutableArray *bodyKeywordFeatures; // @synthesize bodyKeywordFeatures=_bodyKeywordFeatures;
@property (strong) NSArray *bodyMessageUnits; // @synthesize bodyMessageUnits=_bodyMessageUnits;
@property (strong) NSMutableArray *bodySentenceFeatures; // @synthesize bodySentenceFeatures=_bodySentenceFeatures;
@property (strong) NSMutableArray *detectedEvents; // @synthesize detectedEvents=_detectedEvents;
@property (strong) NSMutableSet *extractedNotesStrings; // @synthesize extractedNotesStrings=_extractedNotesStrings;
@property (strong) NSArray *filteredDetectedEvents; // @synthesize filteredDetectedEvents=_filteredDetectedEvents;
@property unsigned long long resultType; // @synthesize resultType=_resultType;
@property (strong) NSArray *stitchedEvents; // @synthesize stitchedEvents=_stitchedEvents;

+ (id)dataDetectorsFeatureExtractor;
+ (id)descriptionForScanResultType:(unsigned long long)arg1;
+ (BOOL)isNaturalLanguageEventDetectionEnabled;
+ (id)keywordFeatureExtractor;
+ (id)sentenceFeatureExtractor;
+ (void)setEventStoreForTesting:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
- (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)arg1;
- (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange)arg2;
- (id)_sortedFeaturesByRange:(id)arg1;
- (id)_stitchedEventsFromEvents:(id)arg1;
- (void)adjustTimeForEvent:(id)arg1;
- (void)adjustTimeForEvents:(id)arg1;
- (id)analyzeFeatures:(id)arg1 messageUnit:(id)arg2;
- (id)analyzeFeatures:(id)arg1 messageUnit:(id)arg2 checkPolarity:(BOOL)arg3 polarity:(unsigned long long)arg4;
- (id)artisNamesFromDataFeatures:(id)arg1;
- (void)augmentDetectedDatesWithEndDates:(id)arg1;
- (id)bestEventsFromEvents:(id)arg1;
- (id)cleanedStringForFeatureData:(id)arg1;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
- (BOOL)dataFeatures:(id)arg1 containDateOlderThan:(id)arg2 preciseTimeOnly:(BOOL)arg3;
- (id)dataFeaturesInTheFutureFromDataFeatures:(id)arg1 messageUnitSentDate:(id)arg2;
- (id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2;
- (id)decoratedTitleFromEventType:(id)arg1 title:(id)arg2 sender:(id)arg3 recipients:(id)arg4 isSent:(BOOL)arg5;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(id)arg3 dataFeatures:(id)arg4;
- (id)entertainmentPOINamesFromDataFeatures:(id)arg1;
- (unsigned long long)eventStatusFromPolarity:(unsigned long long)arg1;
- (unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
- (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2;
- (BOOL)isDateAroundNoon:(id)arg1;
- (BOOL)isDateRoundedTo5Minutes:(id)arg1;
- (BOOL)isEventProposalOrConfirmationFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(BOOL)arg4 extractedFromSubject:(BOOL)arg5 extractedPolarity:(unsigned long long *)arg6 polarityInfluencedByIpsosPlistRef:(BOOL *)arg7;
- (id)messageSenderName;
- (id)movieTitlesFromDataFeatures:(id)arg1;
- (id)normalizedAllDayDateFromDate:(id)arg1;
- (void)normalizedEvents:(id)arg1;
- (id)notesStringsFromDataFeatures:(id)arg1;
- (void)resetScanState;
- (id)restaurantAndBarPOINamesFromDataFeatures:(id)arg1;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)shortNameForPerson:(id)arg1;
- (BOOL)shouldReplaceSendDateWithCurrentDate;
- (id)sportTeamNamesFromDataFeatures:(id)arg1;
- (id)stitchedEventsFromEvents:(id)arg1;
- (id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2;
- (id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1;
- (id)subjectEventVocabularyRejectionKeyword:(id)arg1;

@end

