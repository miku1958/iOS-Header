//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGGraphHelper : NSObject
{
}

+ (double)_confidenceForMePersonIdentifier:(id)arg1 withPersonClusters:(id)arg2 inPhotoLibrary:(id)arg3;
+ (id)_createSocialGraphWithPersonClusterManager:(id)arg1 persons:(id)arg2 moments:(id)arg3 inferredMePersonIdentifier:(id *)arg4 updateBlock:(CDUnknownBlockType)arg5;
+ (id)_socialGroupsIdentifiersInGraph:(id)arg1 includeMeNode:(BOOL)arg2 includeCouples:(BOOL)arg3 includeInvalid:(BOOL)arg4;
+ (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
+ (id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;

@end
