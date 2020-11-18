//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSPeopleInformant : CLSInformant
{
}

+ (id)_clueValueForRelationship:(unsigned long long)arg1;
+ (BOOL)_isLocation:(struct CLLocationCoordinate2D)arg1 closeToLocation:(struct CLLocationCoordinate2D)arg2;
+ (BOOL)_isLocation:(struct CLLocationCoordinate2D)arg1 farFromLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
- (id)_gatherCluesForInvestigation:(id)arg1 inParentOperation:(id)arg2;
- (id)_getCurrentYearStringForBirthdayDate:(id)arg1 atLocalDate:(id)arg2;
- (BOOL)_isAbroadForPerson:(id)arg1 forPlacemarks:(id)arg2 inInvestigation:(id)arg3 inParentOperation:(id)arg4;
- (BOOL)_isExactDate:(id)arg1 forBirthdayDate:(id)arg2;
- (BOOL)_isNextWeekEnd:(id)arg1 forBirthdayDate:(id)arg2;
- (id)_locationRelationshipForPersonRelationship:(id)arg1;
- (BOOL)_persons:(id)arg1 areKindOf:(unsigned long long)arg2;
- (id)farAwayOrCloseCluesForLocations:(id)arg1 forPerson:(id)arg2 withAddressType:(unsigned long long)arg3 forInvestigation:(id)arg4;
- (id)gatherCluesOperationForInvestigation:(id)arg1;
- (id)personForAnniversary:(id)arg1 forInvestigation:(id)arg2;
- (id)personsForBirthdayDates:(id)arg1 inPersons:(id)arg2 inInvestigation:(id)arg3;
- (id)personsForLocations:(id)arg1 inPersons:(id)arg2 inInvestigation:(id)arg3;

@end
