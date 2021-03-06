//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject
{
    BOOL _reportInProgressUpgrades;
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;

+ (BOOL)canAutomaticallyCreateLibrary;
- (void).cxx_destruct;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(BOOL)arg2;
- (BOOL)lightweightPermissionCheckWithError:(id *)arg1;
- (BOOL)lightweightPermissionCheckWithPath:(id)arg1 isDir:(BOOL)arg2 error:(id *)arg3;
- (BOOL)openPhotoLibraryDatabase:(id *)arg1;

@end

