//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject
{
}

+ (BOOL)createDirectory:(id)arg1;
+ (id)filesSortedByTimestamp:(id)arg1;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (id)logFilename:(int)arg1 dumpID:(unsigned int)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;
+ (void)removeOldFilesInDefaultLogDumpPath;

@end

