//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject
{
    BOOL _shouldCollectPowerWifiStats;
    NSObject<OS_dispatch_queue> *_logDumpQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue; // @synthesize logDumpQueue=_logDumpQueue;
@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats; // @synthesize shouldCollectPowerWifiStats=_shouldCollectPowerWifiStats;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_calculateConnectedMinutesForDateKey:(id)arg1 durationKey:(id)arg2 daysDictionary:(id)arg3 totalDurationDictionary:(id)arg4 totalDurationKey:(id)arg5;
- (double)_calculateMinutesSyncingWithDurationKey:(id)arg1 attemptDateKey:(id)arg2;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg1;
- (BOOL)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withPredicate:(id)arg3 withError:(id *)arg4;
- (void)_compressAndDeleteFilesAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_dictionaryForDayKey:(id)arg1;
- (void)_includeCloudKitDebugFilesAtPath:(id)arg1;
- (void)_incrementSyncAttemptsWithKey:(id)arg1 syncDateKey:(id)arg2;
- (BOOL)_isOnPower;
- (BOOL)_isWifiUsable;
- (id)_lastHoursToAppend:(int)arg1;
- (void)_noteSyncEndedForDurationKey:(id)arg1 dateKey:(id)arg2;
- (id)_predicateToAppend:(id)arg1;
- (void)clearSyncStats;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 includeCKDebug:(BOOL)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)dumpMOCLoggingMetaData;
- (void)incrementAHDASyncAttempts;
- (void)incrementCoreDuetSyncAttempts;
- (id)init;
- (id)logShowCommandToFilePath:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3;
- (void)noteAHDASyncEnded;
- (void)noteCoreDuetSyncEnded;
- (void)printIfWeAreInTheMiddleOfASync;
- (void)printPowerAndWifiStats;
- (void)printSyncDurationStats;

@end

