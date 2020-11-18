//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDDatabaseValueCache, NSLock, NSNumber, NSString;
@protocol HDHealthDaemon;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject>
{
    id<HDHealthDaemon> _healthDaemon;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    int _defaultsLoaded;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    NSString *_localBuildNumber;
    NSString *_localDeviceModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *deviceNoneID;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *localBuildNumber; // @synthesize localBuildNumber=_localBuildNumber;
@property (readonly, nonatomic) NSNumber *localDeviceID;
@property (copy, nonatomic) NSString *localDeviceModel; // @synthesize localDeviceModel=_localDeviceModel;
@property (readonly, nonatomic) NSNumber *localSourceID;
@property (strong, nonatomic) HDDatabaseValueCache *originProvenanceByPersistentID; // @synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID;
@property (strong, nonatomic) HDDatabaseValueCache *persistentIDsByProvenanceKey; // @synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadDefaults;
- (id)_lookupOrInsertProvenance:(id)arg1 withError:(id *)arg2;
- (void)checkDefaultsLoaded;
- (id)dataProvenanceDefaultsWithSyncProvenance:(long long)arg1 deviceModel:(id)arg2 buildNumber:(id)arg3 sourceID:(id)arg4 deviceID:(id)arg5 sourceVersion:(id)arg6;
- (id)defaultLocalDataProvenance;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)originProvenanceForPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)provenanceEntityForProvenance:(id)arg1 withError:(id *)arg2;
- (void)setDeviceNoneID:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (void)setLocalSourceID:(id)arg1;

@end

