//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFCloudKitSyncSession : NSObject
{
}

+ (long long)currentDefaultShortcutsVersion;
+ (long long)defaultShortcutsVersion;
+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)ignoresUserDeletedZoneErrors;
+ (void)initialize;
+ (BOOL)isSyncEnabled;
+ (long long)lastSyncedFlagsHash;
+ (BOOL)needsDefaultShortcutUpdate;
+ (void)setDefaultShortcutsVersion:(long long)arg1;
+ (void)setIgnoresUserDeletedZoneErrors:(BOOL)arg1;
+ (void)setLastSyncedFlagsHash:(long long)arg1;
+ (void)setSyncEnabled:(BOOL)arg1;
+ (void)setVoiceShortcutMigrationDidRun:(BOOL)arg1;
+ (void)setVoiceShortcutMigrationDidSync:(BOOL)arg1;
+ (void)setZoneWasPurged:(BOOL)arg1;
+ (long long)syncedFlagsHash;
+ (BOOL)voiceShortcutMigrationDidRun;
+ (BOOL)voiceShortcutMigrationDidSync;
+ (BOOL)zoneWasPurged;
- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;

@end

