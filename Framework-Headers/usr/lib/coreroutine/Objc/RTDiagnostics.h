//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class NSMutableArray, RTDefaultsManager, RTPlatform;

@interface RTDiagnostics : RTService
{
    RTDefaultsManager *_defaultsManager;
    RTPlatform *_platform;
    NSMutableArray *_diagnosticProviders;
}

+ (id)crashReports;
+ (BOOL)createArchiveSourceURL:(id)arg1 destinationURL:(id)arg2 error:(id *)arg3;
+ (id)createDiagnosticsURLWithError:(id *)arg1;
+ (BOOL)fileNameEligibleForCollection:(id)arg1;
+ (id)stringFromDateWithFormat;
- (void).cxx_destruct;
- (id)_collectBackupWithError:(id *)arg1;
- (id)_collectDiagnosticFilesWithError:(id *)arg1;
- (void)_fetchPathToBackupWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (void)_shutdown;
- (void)addDiagnosticProvider:(id)arg1;
- (void)fetchPathToBackupWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 platform:(id)arg2;
- (void)logProcessDiagnosticInformation;

@end
