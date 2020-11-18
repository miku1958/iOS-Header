//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject
{
    NSDictionary *_context;
    BOOL _didUpgrade;
    unsigned int _userDataDisposition;
    NSString *_restoredBackupBuildVersion;
    NSString *_restoredBackupProductType;
    NSString *_dmBundleIdentifier;
}

@property (strong, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (readonly, nonatomic) BOOL didMigrateBackupFromDifferentDevice;
@property (readonly, nonatomic) BOOL didRestoreFromBackup;
@property (readonly, nonatomic) BOOL didRestoreFromCloudBackup;
@property (nonatomic) BOOL didUpgrade; // @synthesize didUpgrade=_didUpgrade;
@property (copy, nonatomic) NSString *dmBundleIdentifier; // @synthesize dmBundleIdentifier=_dmBundleIdentifier;
@property (strong, nonatomic) NSString *restoredBackupBuildVersion; // @synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion;
@property (strong, nonatomic) NSString *restoredBackupProductType; // @synthesize restoredBackupProductType=_restoredBackupProductType;
@property (readonly, nonatomic) BOOL shouldPreserveSettingsAfterRestore;
@property (nonatomic) unsigned int userDataDisposition; // @synthesize userDataDisposition=_userDataDisposition;
@property (readonly, nonatomic) BOOL wasPasscodeSetInBackup;

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)performMigration;

@end
