//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSData;
@protocol UNNotificationAttachmentThumbnailOptions;

@protocol UNSAttachmentThumbnailProvider <NSObject>
- (struct CGSize)sizeForThumbnailOptions:(id<UNNotificationAttachmentThumbnailOptions>)arg1;
- (NSData *)thumbnailPNGOfSize:(struct CGSize)arg1 forThumbnailOptions:(id<UNNotificationAttachmentThumbnailOptions>)arg2;
@end
