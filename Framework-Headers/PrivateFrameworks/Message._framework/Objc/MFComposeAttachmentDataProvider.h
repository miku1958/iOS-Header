//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dataForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (id)dataForContentID:(id)arg1;
- (void)dealloc;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (id)rawDataForContentID:(id)arg1;
- (void)recordPasteboardDataForAttachments:(id)arg1;
- (void)recordUndoDataForAttachments:(id)arg1;
- (void)removeDataForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end

