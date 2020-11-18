//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachmentLibraryDataProvider.h>

#import <Message/NSURLSessionDownloadDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider <NSURLSessionDownloadDelegate>
{
    NSMutableDictionary *_attachments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_defaultDownloadSessionForAttachment:(id)arg1;
- (void)contentDirectoryOfAttachment:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)downloadMainEntryOfAttachment:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
