//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ESDaemonSupport/ESDClientDelegate.h>

#import <ESDaemonSupport/DAEventsAttachmentDownloadConsumer-Protocol.h>

@class NSString;

@interface ESDClientAttachmentDownloadDelegate : ESDClientDelegate <DAEventsAttachmentDownloadConsumer>
{
    NSString *_attachmentUUID;
    id _downloadID;
}

@property (strong, nonatomic) NSString *attachmentUUID; // @synthesize attachmentUUID=_attachmentUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id downloadID; // @synthesize downloadID=_downloadID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginDownload;
- (void)dealloc;
- (void)downloadFinishedError:(id)arg1;
- (void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3;

@end

