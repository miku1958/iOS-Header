//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMTimelapseDiskUtilities : NSObject
{
}

+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)fileNameForImageFrameIndex:(long long)arg1;
+ (id)fileNameForImageVISIndex:(long long)arg1;
+ (long long)frameIndexFromImageFileName:(id)arg1;
+ (BOOL)hasPendingWork;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)arg1;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 useHEVC:(BOOL)arg4;
+ (id)secondaryStateFileName;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2;
+ (id)stateFileName;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)timelapseDirectoryPath;
+ (id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1;
+ (id)timelapseUUIDsOnDisk;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3;
+ (BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;

@end

