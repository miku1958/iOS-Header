//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString, PLBBBulletin, PLBBPendingBulletinsBatch;

@protocol PLBBPendingBulletinsBatchDelegate <NSObject>
- (PLBBBulletin *)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 bulletinByMergingPersistedListWithBulletin:(PLBBBulletin *)arg2;
- (void)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 didProcessReadyBulletins:(NSArray *)arg2 stillPending:(BOOL)arg3;
- (BOOL)bulletinsBatch:(PLBBPendingBulletinsBatch *)arg1 shouldAllowAlertsFromContactWithEmail:(NSString *)arg2;
@end

