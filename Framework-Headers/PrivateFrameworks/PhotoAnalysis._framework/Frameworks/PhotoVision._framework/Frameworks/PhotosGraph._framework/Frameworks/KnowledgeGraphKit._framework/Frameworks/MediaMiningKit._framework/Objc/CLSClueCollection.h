//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSClueCollectionJSExports-Protocol.h>

@class CLSInputPeopleClue, CLSMeaningClue, NSMapTable;
@protocol OS_dispatch_queue;

@interface CLSClueCollection : NSObject <CLSClueCollectionJSExports>
{
    unsigned long long _versionCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    CLSInputPeopleClue *_mePersonClue;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

@property (readonly) CLSMeaningClue *locationMobilityClue;
@property (strong, nonatomic) CLSInputPeopleClue *mePersonClue; // @synthesize mePersonClue=_mePersonClue;
@property (readonly) unsigned long long numberOfDays;
@property (readonly) unsigned long long numberOfLocations;
@property (readonly) unsigned long long numberOfPeoples;
@property (readonly) double timeInterval;
@property (readonly) unsigned long long versionCount; // @synthesize versionCount=_versionCount;

- (void).cxx_destruct;
- (id)_activityString;
- (id)_healthDynamismString;
- (id)_healthHeartBeatString;
- (id)_healthSpeedString;
- (void)_incrementVersionCount;
- (id)_locationMobilityString;
- (id)_locationString;
- (void)_mergeInputClue:(id)arg1;
- (void)_mergeMeaningClue:(id)arg1;
- (void)_mergeOutputClue:(id)arg1;
- (id)_peopleString;
- (id)_petString;
- (id)_timeDurationString;
- (id)_timeEventString;
- (id)_timeOfDayString;
- (id)_timeOfWeekString;
- (id)_timeSeasonString;
- (id)_weatherString;
- (id)activityEventNames;
- (unsigned long long)clueActivity;
- (unsigned long long)clueHealthDynamism;
- (unsigned long long)clueHealthHeartBeat;
- (unsigned long long)clueHealthSpeed;
- (unsigned long long)clueLocation;
- (unsigned long long)clueLocationMobility;
- (unsigned long long)clueMeaningBeatsSentenceActivity;
- (unsigned long long)clueMeaningBeatsSentenceLocation;
- (unsigned long long)clueMeaningBeatsSentenceTimeEvent;
- (unsigned long long)cluePeople;
- (unsigned long long)cluePet;
- (unsigned long long)clueTimeDuration;
- (unsigned long long)clueTimeEvent;
- (unsigned long long)clueTimeOfDay;
- (unsigned long long)clueTimeOfWeek;
- (unsigned long long)clueTimeSeason;
- (unsigned long long)clueWeather;
- (id)description;
- (id)detailedLocationDescription;
- (id)distanceFromHome;
- (id)distanceFromWork;
- (void)enumerateLocationClues:(CDUnknownBlockType)arg1;
- (void)enumeratePeopleClues:(CDUnknownBlockType)arg1;
- (void)enumerateTimeClues:(CDUnknownBlockType)arg1;
- (void)enumerateTimeOfDayClues:(CDUnknownBlockType)arg1;
- (BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2;
- (BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2;
- (BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)init;
- (id)inputClues;
- (id)inputCluesForKey:(id)arg1;
- (id)localDates;
- (id)localEndDate;
- (id)localStartDate;
- (id)locationAddresses;
- (id)locationCities;
- (id)locationCounties;
- (id)locationCountries;
- (id)locationDescription;
- (id)locationNames;
- (id)locationNeighbourhoods;
- (id)locationPlacemarks;
- (id)locationRegions;
- (id)locationRegionsInPlacemarks;
- (id)locationStates;
- (id)locations;
- (id)matchingDescription;
- (id)matchingFullDescription;
- (id)mePerson;
- (id)meaningClues;
- (id)meaningCluesForKey:(id)arg1;
- (id)meaningCluesForKey:(id)arg1 andValue:(id)arg2;
- (void)mergeClues:(id)arg1;
- (unsigned long long)numberOfTimes;
- (id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3;
- (id)outputClues;
- (id)outputCluesForKey:(id)arg1;
- (id)outputCluesForKey:(id)arg1 andValue:(id)arg2;
- (id)peopleDescription;
- (id)peopleDescriptionWithoutPeople:(id)arg1;
- (id)peopleNames;
- (id)peopleTypeForPeopleName:(id)arg1;
- (id)prepareOperations;
- (id)timeEventNames;
- (id)uniqueInputClues;
- (id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueMeaningClues;
- (id)uniqueMeaningCluesForKey:(id)arg1;
- (id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2;
- (id)uniqueOutputClues;
- (id)uniqueOutputCluesForKey:(id)arg1;
- (id)universalDates;
- (id)universalEndDate;
- (id)universalStartDate;
- (long long)year;

@end

