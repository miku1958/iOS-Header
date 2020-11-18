//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IPEventClassificationType : NSObject
{
    BOOL _allDayAllowed;
    BOOL _useForTimeAdjustement;
    BOOL _highPriority;
    BOOL _lowPriority;
    int _defaultStartingTimeHour;
    int _defaultStartingTimeMinutes;
    NSString *_identifier;
    NSString *_defaultTitle;
    double _defaultDuration;
    NSString *_language;
    NSMutableArray *_keywords;
    IPEventClassificationType *_parent;
    NSMutableArray *_children;
    NSMutableSet *_upperPriorityEventTypes;
    double _minutesBeforeDefaultStartingTime;
    double _minutesAfterDefaultStartingTime;
    NSArray *_events;
    unsigned long long _classificationDepth;
    NSString *_subjectKeywordsPattern;
}

@property (nonatomic, getter=isAllDayAllowed) BOOL allDayAllowed; // @synthesize allDayAllowed=_allDayAllowed;
@property (strong, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property (nonatomic) unsigned long long classificationDepth; // @synthesize classificationDepth=_classificationDepth;
@property (readonly, nonatomic, getter=isCultureRelated) BOOL cultureRelated;
@property (nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property (nonatomic) int defaultStartingTimeHour; // @synthesize defaultStartingTimeHour=_defaultStartingTimeHour;
@property (nonatomic) int defaultStartingTimeMinutes; // @synthesize defaultStartingTimeMinutes=_defaultStartingTimeMinutes;
@property (strong, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property (strong, nonatomic) NSArray *events; // @synthesize events=_events;
@property (readonly, nonatomic, getter=isFairlyGeneric) BOOL fairlyGeneric;
@property (nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isAppointment) BOOL isAppointment;
@property (strong, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (nonatomic, getter=isLowPriority) BOOL lowPriority; // @synthesize lowPriority=_lowPriority;
@property (readonly, nonatomic, getter=isMealRelated) BOOL mealRelated;
@property (nonatomic) double minutesAfterDefaultStartingTime; // @synthesize minutesAfterDefaultStartingTime=_minutesAfterDefaultStartingTime;
@property (nonatomic) double minutesBeforeDefaultStartingTime; // @synthesize minutesBeforeDefaultStartingTime=_minutesBeforeDefaultStartingTime;
@property (readonly, nonatomic, getter=isMovieRelated) BOOL movieRelated;
@property (weak, nonatomic) IPEventClassificationType *parent; // @synthesize parent=_parent;
@property (readonly, nonatomic, getter=isSportRelated) BOOL sportRelated;
@property (strong) NSString *subjectKeywordsPattern; // @synthesize subjectKeywordsPattern=_subjectKeywordsPattern;
@property (strong, nonatomic) NSMutableSet *upperPriorityEventTypes; // @synthesize upperPriorityEventTypes=_upperPriorityEventTypes;
@property (nonatomic) BOOL useForTimeAdjustement; // @synthesize useForTimeAdjustement=_useForTimeAdjustement;

+ (id)_allClusterIdentifiers;
+ (double)_computeScoreForEventTypeBranchNode:(id)arg1 messageUnit:(id)arg2;
+ (id)_identifierForCluster:(unsigned long long)arg1;
+ (id)_identifiersForClusters:(id)arg1;
+ (id)_loadTaxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2 error:(id *)arg3;
+ (double)_numberOfMatchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 rejectionRanges:(id)arg4 eventType:(id)arg5 logDetectedKeywords:(BOOL)arg6;
+ (id)_parentFromIdentifier:(id)arg1;
+ (id)_priorityEventTypeFromCandidates:(id)arg1;
+ (id)_selectBestEventTypeFromCandidates:(id)arg1;
+ (id)_taxonomyForLanguageID:(id)arg1 clusterType:(unsigned long long)arg2;
+ (id)cleanSubject:(id)arg1;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 detectedStartDate:(id)arg2;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 scopedClusterType:(unsigned long long)arg2 fallbackClusterType:(unsigned long long)arg3;
+ (id)eventTypeForCultureAndLanguageID:(id)arg1;
+ (id)eventTypeForEntertainmentAndLanguageID:(id)arg1;
+ (id)eventTypeForMealsAndLanguageID:(id)arg1;
+ (id)eventTypeForMoviesAndLanguageID:(id)arg1;
+ (id)eventTypeForSportAndLanguageID:(id)arg1;
+ (id)fallbackEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 checkForDateInSubject:(BOOL)arg3;
+ (id)morePreciseEventClassificationTypeBetweenType:(id)arg1 and:(id)arg2;
- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_addParent:(id)arg1;
- (void)_addUpperPriorityEventType:(id)arg1;
- (BOOL)_hasPriorityOverEventType:(id)arg1;
- (BOOL)_hasPriorityOverEventTypes:(id)arg1;
- (id)_mealClassificationTypeUsingStartDate:(id)arg1;
- (void)addEventPatterns:(id)arg1;
- (id)adjustedEventClassificationTypeWithStartDate:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 isDateInSubject:(BOOL)arg3;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 language:(id)arg2 keywords:(id)arg3 defaultTitle:(id)arg4 defaultStartingTimeHour:(int)arg5 defaultStartingTimeMinutes:(int)arg6 defaultDuration:(double)arg7 parent:(id)arg8 children:(id)arg9 upperPriorityEventTypes:(id)arg10 useForTimeAdjustement:(BOOL)arg11 minutesBeforeDefaultStartingTime:(double)arg12 minutesAfterDefaultStartingTime:(double)arg13 highPriority:(BOOL)arg14 lowPriority:(BOOL)arg15 allDayAllowed:(BOOL)arg16 subjectKeywords:(id)arg17;
- (BOOL)isDateWithinRange:(id)arg1;
- (id)properCasedTitleForTitle:(id)arg1 locale:(id)arg2;
- (BOOL)questionMarkInString:(id)arg1;

@end

