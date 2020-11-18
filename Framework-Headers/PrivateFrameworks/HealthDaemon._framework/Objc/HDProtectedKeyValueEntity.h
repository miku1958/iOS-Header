//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
{
}

+ (long long)_deviceLocalCategory;
+ (id)_keyForDataType:(id)arg1 error:(id *)arg2;
+ (id)achievementValueForKey:(id)arg1 category:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)achievementValueForKey:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (id)codableAchievementValuesForKeys:(id)arg1 category:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)databaseTable;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (BOOL)removeAchievementValuesForKeys:(id)arg1 category:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)setAchievementValuesWithDictionary:(id)arg1 category:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)setAchievementValuesWithDictionary:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (BOOL)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)userCharacteristicForType:(id)arg1 healthDaemon:(id)arg2 entity:(id *)arg3 error:(id *)arg4;
+ (id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;

@end

