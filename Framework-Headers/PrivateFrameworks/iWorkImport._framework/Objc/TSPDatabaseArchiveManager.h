//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPDatabaseArchiveManager : NSObject
{
}

+ (BOOL)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (BOOL)_processLoad:(id)arg1 classType:(int *)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id *)arg5;
+ (BOOL)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3;

@end

