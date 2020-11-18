//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/UNSAttachmentData.h>

#import <UserNotificationsServer/UNSAttachmentThumbnailProvider-Protocol.h>

@class NSString;

@interface UNSMovieAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_videoAssetWithURL:(id)arg1;
+ (id)_videoTrackForAsset:(id)arg1;
+ (BOOL)isFileValid:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)sizeForThumbnailOptions:(id)arg1;
- (id)thumbnailPNGOfSize:(struct CGSize)arg1 forThumbnailOptions:(id)arg2;

@end

