//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject
{
    WFDatabase *_database;
}

@property (readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;

+ (void)fetchMigrationFlagWithCompletion:(CDUnknownBlockType)arg1;
+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (BOOL)migrateFromManagedObjectContext:(id)arg1 error:(id *)arg2;
- (BOOL)saveRecord:(id)arg1 error:(id *)arg2;

@end
