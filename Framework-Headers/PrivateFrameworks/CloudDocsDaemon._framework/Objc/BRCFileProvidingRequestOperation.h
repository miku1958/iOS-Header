//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCDownloadTracking-Protocol.h>
#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/BRCReachabilityDelegate-Protocol.h>

@class BRCAccountSession, BRCDirectoryItem, BRCTreeEnumerator, BRCXPCClient, NSError, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass>
{
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackedDocIDs;
    NSSet *_docIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isStillEnumeratingDirectory;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
    BOOL _isRecursive;
    BOOL _isForBackup;
    BOOL _wantsCurrentVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isForBackup; // @synthesize isForBackup=_isForBackup;
@property (nonatomic) BOOL isRecursive; // @synthesize isRecursive=_isRecursive;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedDocIDs;
@property (nonatomic) BOOL wantsCurrentVersion; // @synthesize wantsCurrentVersion=_wantsCurrentVersion;

- (void).cxx_destruct;
- (void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2;
- (void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2;
- (void)_provideDirectoryRecursively:(id)arg1;
- (void)_provideDocument:(id)arg1;
- (void)_provideItem;
- (void)_provideURL;
- (void)addCompletionCallback:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDirectoryItem:(id)arg1;
- (id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4;
- (void)main;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (BOOL)shouldRetryForError:(id)arg1;

@end
