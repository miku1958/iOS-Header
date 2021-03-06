//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/_TtC7NewsUI221OfflineContentManager.h>

#import <NewsUI2/FCBoostableOperationThrottlerDelegate-Protocol.h>
#import <NewsUI2/NDDownloadConsumer-Protocol.h>

@class NSSet;

@interface _TtC7NewsUI221OfflineContentManager (NewsUI2) <NDDownloadConsumer, FCBoostableOperationThrottlerDelegate>

@property (nonatomic, readonly) NSSet *downloadedArticleIDs;

- (void)downloadFinishedForRequest:(id)arg1 error:(id)arg2;
- (void)downloadProgressedForRequest:(id)arg1 contentArchive:(id)arg2;
- (void)downloadProgressedForRequest:(id)arg1 progress:(double)arg2;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
@end

