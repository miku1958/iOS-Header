//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDemoDataActivitySampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorState, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataMindfulnessSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataPerson, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, NSArray, NSCalendar, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDemoDataGenerator : NSObject <HDHealthDaemonReadyObserver>
{
    NSArray *_sampleGenerators;
    HDProfile *_profile;
    HDDemoDataGeneratorState *_generatorState;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    BOOL _isGeneratingDemoData;
    NSObject<OS_dispatch_queue> *_demoDataQueue;
    NSObject<OS_dispatch_source> *_demoDataTimer;
    HDDemoDataPerson *_demoPerson;
    HDDemoDataActivitySampleGenerator *_activitySampleGenerator;
    HDDemoDataBloodSampleGenerator *_bloodSampleGenerator;
    HDDemoDataBodySampleGenerator *_bodySampleGenerator;
    HDDemoDataFoodSampleGenerator *_foodSampleGenerator;
    HDDemoDataHealthDocumentSampleGenerator *_healthDocumentSampleGenerator;
    HDDemoDataPathologySampleGenerator *_pathologySampleGenerator;
    HDDemoDataReproductiveHealthSampleGenerator *_reproductiveHealthSampleGenerator;
    HDDemoDataSleepSampleGenerator *_sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator *_statisticsSampleGenerator;
    HDDemoDataVitalsSampleGenerator *_vitalsSampleGenerator;
    HDDemoDataMindfulnessSampleGenerator *_mindfulnessSampleGenerator;
}

@property (strong, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator; // @synthesize activitySampleGenerator=_activitySampleGenerator;
@property (strong, nonatomic) HDDemoDataBloodSampleGenerator *bloodSampleGenerator; // @synthesize bloodSampleGenerator=_bloodSampleGenerator;
@property (strong, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator; // @synthesize bodySampleGenerator=_bodySampleGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HDDemoDataPerson *demoPerson; // @synthesize demoPerson=_demoPerson;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator; // @synthesize foodSampleGenerator=_foodSampleGenerator;
@property (readonly, nonatomic) HDDemoDataGeneratorState *generatorState; // @synthesize generatorState=_generatorState;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator; // @synthesize healthDocumentSampleGenerator=_healthDocumentSampleGenerator;
@property (strong, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator; // @synthesize mindfulnessSampleGenerator=_mindfulnessSampleGenerator;
@property (strong, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator; // @synthesize pathologySampleGenerator=_pathologySampleGenerator;
@property (strong, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator; // @synthesize reproductiveHealthSampleGenerator=_reproductiveHealthSampleGenerator;
@property (strong, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator; // @synthesize sleepSampleGenerator=_sleepSampleGenerator;
@property (strong, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator; // @synthesize statisticsSampleGenerator=_statisticsSampleGenerator;
@property (readonly) Class superclass;
@property (strong, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator; // @synthesize vitalsSampleGenerator=_vitalsSampleGenerator;

- (void).cxx_destruct;
- (BOOL)_archiveObject:(id)arg1 toDirectoryPath:(id)arg2;
- (void)_archiveToDirectoryPath:(id)arg1;
- (double)_initialGenerationTimeWithCurrentDate:(id)arg1;
- (void)_insertBiographicalDataFromDemoPerson:(id)arg1;
- (void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2;
- (void)_insertMedicalIDForDemoPerson:(id)arg1;
- (id)_phoneProveance;
- (void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2;
- (void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_queue_generateDemoDataIfNeeded;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)arg1;
- (void)_queue_initDemoDataSampleGenerators;
- (BOOL)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 currentDate:(id)arg2;
- (void)_queue_setupDemoDataSampleGenerators;
- (BOOL)_queue_unarchiveFromDirectoryPath:(id)arg1;
- (void)_runAchievementDoctorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupRepeatingDemoDataGeneration;
- (id)_stateDirectory;
- (id)_unarchiveDataWithClass:(Class)arg1 atDirectoryPath:(id)arg2;
- (void)_updateWorkoutConfigurationInGeneratorState;
- (id)_watchProvenanceWithPerson:(id)arg1;
- (id)currentDateFromCurrentTime:(double)arg1;
- (void)daemonReady:(id)arg1;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)gregorianCalendar;
- (id)initWithProfile:(id)arg1;
- (BOOL)isDifferentDayFromTime:(double)arg1;

@end
