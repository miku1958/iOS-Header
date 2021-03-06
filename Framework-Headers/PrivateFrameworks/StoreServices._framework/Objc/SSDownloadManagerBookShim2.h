//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSDownloadManager.h>

@protocol SSBookDownloadQueue;

@interface SSDownloadManagerBookShim2 : SSDownloadManager
{
    id<SSBookDownloadQueue> _downloadQueue;
}

- (void).cxx_destruct;
- (void)__book_cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)__book_dispatchBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (id)__book_downloadsForStati:(id)arg1 overrideFinished:(BOOL)arg2 overrideFailed:(BOOL)arg3;
- (void)__book_filterDownloads:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)__book_getAllDownloads;
- (void)__book_pauseDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)__book_resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)__book_sendDownloadsChanged:(id)arg1 filterBooks:(BOOL)arg2;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendDownloadsChanged:(id)arg1;
- (id)bookDownloads;
- (void)cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)initWithManagerOptions:(id)arg1;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)restartDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

