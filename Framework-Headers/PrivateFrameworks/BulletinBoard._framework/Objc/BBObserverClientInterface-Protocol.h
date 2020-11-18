//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BBBulletin, BBObserverBulletinUpdate, BBSectionInfo, BBSectionParameters, NSArray, NSNumber, NSString;

@protocol BBObserverClientInterface
- (void)getObserverDebugInfo:(void (^)(NSString *))arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(NSNumber *)arg1;
- (void)noteAlertBehaviorOverridesChanged:(NSNumber *)arg1;
- (void)noteServerReceivedResponseForBulletin:(BBBulletin *)arg1;
- (void)updateBulletin:(BBObserverBulletinUpdate *)arg1 forFeeds:(unsigned long long)arg2;
- (void)updateBulletin:(BBObserverBulletinUpdate *)arg1 forFeeds:(unsigned long long)arg2 withHandler:(void (^)(BOOL, NSError *))arg3;
- (void)updateSectionInfo:(BBSectionInfo *)arg1;
- (void)updateSectionOrder:(NSArray *)arg1;
- (void)updateSectionOrderRule:(NSNumber *)arg1;
- (void)updateSectionParameters:(BBSectionParameters *)arg1 forSectionID:(NSString *)arg2;
@end

