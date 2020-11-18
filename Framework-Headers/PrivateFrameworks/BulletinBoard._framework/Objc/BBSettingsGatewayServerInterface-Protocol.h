//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBSectionInfo, NSSet, NSString;

@protocol BBSettingsGatewayServerInterface <NSObject>
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)getEffectiveGlobalSpokenNotificationSettingWithHandler:(void (^)(long long, NSError *))arg1;
- (void)getEffectiveSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getEffectiveSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionIDsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoForActiveSectionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionInfo *))arg2;
- (void)getSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)getSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1 withHandler:(void (^)(void))arg2;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2 withHandler:(void (^)(void))arg3;
@end
