//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGPeopleTitleUtility : NSObject
{
}

+ (id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2;
+ (id)_nameFromPeopleNode:(id)arg1;
+ (id)_peopleGroupNameForPeopleNodes:(id)arg1;
+ (id)_placeDisplayNameForPeopleAddressEdgeLabel:(id)arg1;
+ (id)ageStringForPeopleNode:(id)arg1 date:(id)arg2;
+ (id)ageStringForPeopleNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)beautifiedLocationStringWithPeopleNode:(id)arg1 peopleAddressEdgeLabel:(id)arg2;
+ (id)nameStringForPeopleNodes:(id)arg1 includeMe:(BOOL)arg2;

@end
