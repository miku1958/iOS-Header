//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCNotificationDropboxData.h>

#import <NewsCore/FCMutableNotificationData-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>
{
}

@property (readonly, copy, nonatomic) NSString *baseURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceToken;
@property (readonly, nonatomic) NSMutableDictionary *dictionary; // @dynamic dictionary;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *notificationUserID;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setBaseURLString:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setNotificationUserID:(id)arg1;
- (void)setStorefrontID:(id)arg1;

@end
