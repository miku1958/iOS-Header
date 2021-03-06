//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, PPSQLDatabase;

@interface PPHealthKitImporter : NSObject
{
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

+ (BOOL)_shouldImport;
+ (id)_workoutTopicMap;
- (void).cxx_destruct;
- (void)_donateTopics:(id)arg1 workout:(id)arg2;
- (id)_getSavedAnchor;
- (void)_importWorkouts:(id)arg1;
- (void)_removeDeletedWorkouts:(id)arg1;
- (BOOL)_saveAnchor:(id)arg1;
- (id)_scoredTopicsFromPropertiesOfWorkouts:(id)arg1 workoutTopicMap:(id)arg2;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;

@end

