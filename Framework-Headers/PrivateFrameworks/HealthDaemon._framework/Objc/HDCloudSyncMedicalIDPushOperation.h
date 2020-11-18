//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncMedicalIDRecord, _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation
{
    _HKMedicalIDData *_cloudMedicalIDData;
    _HKMedicalIDData *_medicalIDDataToPush;
    HDCloudSyncMedicalIDRecord *_medicalIDRecord;
}

@property (strong, nonatomic) _HKMedicalIDData *cloudMedicalIDData; // @synthesize cloudMedicalIDData=_cloudMedicalIDData;
@property (strong, nonatomic) _HKMedicalIDData *medicalIDDataToPush; // @synthesize medicalIDDataToPush=_medicalIDDataToPush;
@property (strong, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord; // @synthesize medicalIDRecord=_medicalIDRecord;

- (void).cxx_destruct;
- (id)_eventWithDeviceProperties;
- (void)_pushMedicalIDRecordToCloudForContainer:(id)arg1 database:(id)arg2;
- (void)main;

@end
