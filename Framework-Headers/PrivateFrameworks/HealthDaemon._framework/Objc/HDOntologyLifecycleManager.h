//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDHealthOntologyManagerObserver-Protocol.h>
#import <HealthDaemon/HDHealthRecordsAccountEventObserver-Protocol.h>

@class HDConceptIndexManager, HDHealthOntologyConfiguration, HDHealthOntologyManager, HDOntologyAssetManager, HDProfile, NSSet, NSString;
@protocol HDOntologyTester;

@interface HDOntologyLifecycleManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDHealthOntologyManagerObserver, HDHealthRecordsAccountEventObserver>
{
    struct os_unfair_lock_s _ivarLock;
    BOOL _ready;
    HDProfile *_profile;
    HDOntologyAssetManager *_assetManager;
    HDHealthOntologyManager *_ontologyManager;
    HDConceptIndexManager *_indexManager;
    HDHealthOntologyConfiguration *_ontologyConfiguration;
    id<HDOntologyTester> _ontologyTester;
    HDHealthOntologyConfiguration *_unitTesting_ontologyConfigurationOverride;
}

@property (readonly, copy, nonatomic) NSSet *allSupportedCountryCodes;
@property (strong, nonatomic) HDOntologyAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (readonly, nonatomic) HDConceptIndexManager *indexManager; // @synthesize indexManager=_indexManager;
@property (copy, nonatomic) HDHealthOntologyConfiguration *ontologyConfiguration; // @synthesize ontologyConfiguration=_ontologyConfiguration;
@property (strong, nonatomic) HDHealthOntologyManager *ontologyManager; // @synthesize ontologyManager=_ontologyManager;
@property (weak, nonatomic) id<HDOntologyTester> ontologyTester; // @synthesize ontologyTester=_ontologyTester;
@property (readonly, copy, nonatomic) NSSet *optInDataCollectionEnabledCountryCodes;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property (readonly) Class superclass;
@property (strong, nonatomic) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride; // @synthesize unitTesting_ontologyConfigurationOverride=_unitTesting_ontologyConfigurationOverride;

- (void).cxx_destruct;
- (void)_disableAllManagers;
- (void)_enableAllManagers;
- (void)_evaluateManagerState;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (BOOL)isCountryCodeSupported:(id)arg1;
- (BOOL)isCountrySupported:(id)arg1;
- (void)obliterateWithReason:(id)arg1;
- (id)ontologyConfigurationForCountryCode:(id)arg1;
- (void)ontologyManagerReferenceOntologyCreated:(id)arg1;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)ontologyManagerReferenceOntologyWillUpdate:(id)arg1;
- (void)profileExtension:(id)arg1 accountEventOccurred:(unsigned long long)arg2;

@end

