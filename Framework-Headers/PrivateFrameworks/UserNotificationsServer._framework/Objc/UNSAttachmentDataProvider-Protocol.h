//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSData, UNNotificationAttachment;

@protocol UNSAttachmentDataProvider <NSObject>
- (NSData *)data;

@optional
- (struct CGSize)naturalSizeForAttachment:(UNNotificationAttachment *)arg1;
- (NSData *)thumbnailPNGOfSize:(struct CGSize)arg1 forAttachment:(UNNotificationAttachment *)arg2;
@end
