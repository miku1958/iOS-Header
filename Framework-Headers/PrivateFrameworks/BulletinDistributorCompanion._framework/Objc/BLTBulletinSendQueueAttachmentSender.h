//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BLTBulletinSendQueueAttachmentSender : NSObject
{
    NSMutableArray *_urls;
}

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1 key:(id)arg2;
- (id)init;
- (BOOL)sendAttachmentsWithSender:(id)arg1 timeout:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

