//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HeartHealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HeartHealthDaemon/HDHRCardioFitnessStorePluginServerInterface-Protocol.h>

@class NSString;

@interface HDHRCardioFitnessStoreServer : HDStandardTaskServer <HDDiagnosticObject, HDHRCardioFitnessStorePluginServerInterface>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;
- (BOOL)_insertSampleWithLocalSource:(id)arg1 error:(id *)arg2;
- (BOOL)_saveCardioFitnessNotificationWithValue:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;
- (void)_triggerNanoSync;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_saveCardioFitnessAlertWithValue:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;

@end

