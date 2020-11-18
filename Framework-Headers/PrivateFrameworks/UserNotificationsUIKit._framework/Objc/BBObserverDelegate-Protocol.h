//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class BBAttachmentMetadata, BBBulletin, BBObserver, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSData, NSSet, NSString, UIImage;

@protocol BBObserverDelegate <NSObject>

@optional
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(void (^)(BOOL))arg5;
- (UIImage *)observer:(BBObserver *)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(NSData *)arg3 key:(NSString *)arg4;
- (struct CGSize)observer:(BBObserver *)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(NSString *)arg5;
- (void)observer:(BBObserver *)arg1 composedImageFromThumbnailData:(NSData *)arg2 forAttachment:(BBAttachmentMetadata *)arg3 bulletin:(BBBulletin *)arg4 completionHandler:(void (^)(UIImage *))arg5;
- (struct CGSize)observer:(BBObserver *)arg1 composedImageSizeForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3 thumbnailSize:(struct CGSize)arg4;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 noteInvalidatedBulletinIDs:(NSSet *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(BBSectionParameters *)arg2 forSectionID:(NSString *)arg3;
- (void)observer:(BBObserver *)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(BBObserver *)arg1 noteServerReceivedResponseForBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 prepareAttachment:(BBAttachmentMetadata *)arg2 beforeDeliveringBulletin:(BBBulletin *)arg3 withCompletionHandler:(void (^)(unsigned long long))arg4;
- (void)observer:(BBObserver *)arg1 processData:(NSData *)arg2 forAttachment:(BBAttachmentMetadata *)arg3 bulletin:(BBBulletin *)arg4 completionHandler:(void (^)(NSData *))arg5;
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 removeSection:(NSString *)arg2;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachment:(BBAttachmentMetadata *)arg2 bulletin:(BBBulletin *)arg3;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(BBObserver *)arg1;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(BBObserver *)arg1;
@end

