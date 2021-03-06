//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSArray, NSObject, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration
{
}

@property (nonatomic) BOOL allowsDiagnosticExtension; // @dynamic allowsDiagnosticExtension;
@property (nonatomic) BOOL allowsRemoteTraining; // @dynamic allowsRemoteTraining;
@property (nonatomic) BOOL allowsUpdatingModelFile; // @dynamic allowsUpdatingModelFile;
@property (copy, nonatomic) NSURL *baseModelFileURL; // @dynamic baseModelFileURL;
@property (copy, nonatomic) REDataSourceLoader *dataSourceLoader; // @dynamic dataSourceLoader;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @dynamic engineQueue;
@property (nonatomic) BOOL ignoreDeviceLockState; // @dynamic ignoreDeviceLockState;
@property (nonatomic) BOOL ignoresInstalledApplications; // @dynamic ignoresInstalledApplications;
@property (strong, nonatomic) RELocationManager *locationManager; // @dynamic locationManager;
@property (strong, nonatomic) id<RERelevanceEngineMetricsRecorder> metricsRecorder; // @dynamic metricsRecorder;
@property (copy, nonatomic) NSURL *modelFileURL; // @dynamic modelFileURL;
@property (nonatomic) unsigned long long modelStorageBehavior; // @dynamic modelStorageBehavior;
@property (nonatomic) unsigned long long modelVersion; // @dynamic modelVersion;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @dynamic observerQueue;
@property (copy, nonatomic) NSString *preferenceDomain; // @dynamic preferenceDomain;
@property (copy, nonatomic) REFeatureSet *primaryFeatures; // @dynamic primaryFeatures;
@property (copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader; // @dynamic relevanceProviderManagerLoader;
@property (nonatomic) unsigned long long trainingBehavior; // @dynamic trainingBehavior;
@property (nonatomic) BOOL wantsBackup; // @dynamic wantsBackup;
@property (nonatomic) BOOL wantsImmutableContent; // @dynamic wantsImmutableContent;
@property (copy, nonatomic) NSArray *whitelistedDataSourceClassNames; // @dynamic whitelistedDataSourceClassNames;

+ (id)defaultConfiguration;
+ (id)defaultUpNextConfiguration;
+ (id)sampleUpNextConfiguration;
- (long long)_indexOfInteractionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)addSectionWithDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllInteractions;
- (void)removeAllSections;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeSectionWithName:(id)arg1;

@end

