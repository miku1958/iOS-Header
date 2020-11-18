//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PairingProximity/BBSectionIdentity-Protocol.h>

@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@protocol BBDataProvider <BBSectionIdentity>
- (NSArray *)sortDescriptors;

@optional
- (float)attachmentAspectRatioForRecordID:(NSString *)arg1;
- (NSData *)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(id)arg3;
- (void)dataProviderDidLoad;
- (NSArray *)defaultSubsectionInfos;
- (NSString *)displayNameForFilterID:(NSString *)arg1;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (BOOL)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (NSData *)primaryAttachmentDataForRecordID:(NSString *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (BBSectionParameters *)sectionParameters;
- (BOOL)syncsBulletinDismissal;
@end

