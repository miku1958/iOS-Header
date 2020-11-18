//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTSectionInfoList, NSDictionary, NSString;

@protocol BLTSectionInfoListDelegate <NSObject>
- (BOOL)sectionInfoList:(BLTSectionInfoList *)arg1 override:(NSDictionary *)arg2 shouldApplyToSectionInfoForSectionID:(NSString *)arg3;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedRemoveSectionWithSectionID:(NSString *)arg2;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedUpdatedSectionInfoForSectionID:(NSString *)arg2;
- (BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(NSString *)arg1;
@end
