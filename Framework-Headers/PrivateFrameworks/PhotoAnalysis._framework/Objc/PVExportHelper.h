//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVExportHelper : NSObject
{
}

+ (id)_peopleClustersDictionaryForType:(unsigned long long)arg1 withPersonClusterManager:(id)arg2;
+ (BOOL)exportPersonClusterManager:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id *)arg4;
+ (BOOL)exportPhotoLibrary:(id)arg1 toURL:(id)arg2 forPeopleType:(unsigned long long)arg3 error:(id *)arg4;
+ (BOOL)snapshotPhotoLibrary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;

@end

