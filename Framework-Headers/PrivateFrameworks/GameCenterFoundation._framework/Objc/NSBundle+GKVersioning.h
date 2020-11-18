//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (GKVersioning)
+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;
+ (BOOL)_gkMainBundleIsGameCenterSystemProcess;
- (id)_gkBundleShortVersion;
- (id)_gkBundleVersion;
- (id)_gkFrameworkVersionDescription;
- (BOOL)_gkIsBadgingEnabled;
- (BOOL)_gkIsDaemon;
- (BOOL)_gkIsFirstParty;
- (BOOL)_gkIsGameCenter;
- (BOOL)_gkIsGameCenterExtension;
- (BOOL)_gkIsPreferences;
- (id)_gkLocalizedName;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkLocalizedStringFromLocaleName:(id)arg1 key:(id)arg2 tableName:(id)arg3 value:(id)arg4;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForInviteSound;
- (id)_gkPathForMessageImage;
- (id)_gkPathForSoundWithName:(id)arg1;
- (id)_gkPreferredLanguage;
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
@end
