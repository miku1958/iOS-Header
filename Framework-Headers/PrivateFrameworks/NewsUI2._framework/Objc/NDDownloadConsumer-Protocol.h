//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCContentArchive, NDDownloadRequest, NSError;

@protocol NDDownloadConsumer <NSObject>
- (void)downloadFinishedForRequest:(NDDownloadRequest *)arg1 error:(NSError *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 contentArchive:(FCContentArchive *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 progress:(double)arg2;
@end

