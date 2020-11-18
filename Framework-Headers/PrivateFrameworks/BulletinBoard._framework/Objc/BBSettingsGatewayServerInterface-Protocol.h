//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionInfo, NSArray, NSDate, NSSet, NSString;

@protocol BBSettingsGatewayServerInterface <NSObject>
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(void (^)(long long, NSDate *))arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getBehaviorOverridesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getPrivilegedSenderTypesWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getSectionInfoForActiveSectionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionOrderRuleWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(NSDate *)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverrides:(NSArray *)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
- (void)setOrderedSectionIDs:(NSArray *)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(NSString *)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
- (void)setSectionOrderRule:(long long)arg1;
@end

