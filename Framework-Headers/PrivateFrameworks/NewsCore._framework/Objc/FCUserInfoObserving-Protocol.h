//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfo:(FCUserInfo *)arg1 didAddAccessTokenForTagID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
@end

