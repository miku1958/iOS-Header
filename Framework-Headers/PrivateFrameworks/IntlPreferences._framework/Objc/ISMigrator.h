//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ISMigrator : NSObject
{
    unsigned long long _platform;
    NSString *_previousVersion;
    NSString *_currentVersion;
    NSDictionary *_preferencesBeforeMigration;
    NSDictionary *_preferencesAfterMigration;
}

@property (copy, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property (nonatomic) unsigned long long platform; // @synthesize platform=_platform;
@property (copy, nonatomic) NSDictionary *preferencesAfterMigration; // @synthesize preferencesAfterMigration=_preferencesAfterMigration;
@property (copy, nonatomic) NSDictionary *preferencesBeforeMigration; // @synthesize preferencesBeforeMigration=_preferencesBeforeMigration;
@property (copy, nonatomic) NSString *previousVersion; // @synthesize previousVersion=_previousVersion;

+ (unsigned long long)currentPlatform;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3;
- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (void)dealloc;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (BOOL)performMigration;
- (id)performMigrationForPreferences:(id)arg1;

@end

