//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, NSURL, WBSConfigurationDownloader;
@protocol OS_dispatch_queue, WBSRemotePlistControllerDelegate, WBSRemotePlistSnapshot;

@interface WBSRemotePlistController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    NSURL *_builtInListURL;
    NSURL *_downloadsDirectoryURL;
    NSString *_resourceName;
    NSString *_resourceVersion;
    NSString *_updateDateDefaultsKey;
    Class _snapshotClass;
    Class _snapshotTransformerClass;
    double _updateInterval;
    id<WBSRemotePlistSnapshot> _currentSnapshot;
    WBSConfigurationDownloader *_configurationDownloader;
    NSTimer *_updateTimer;
    BOOL _shouldAttemptToUpdateConfiguration;
    BOOL _shouldAttemptToDownloadConfiguration;
    id<WBSRemotePlistControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<WBSRemotePlistControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration; // @synthesize shouldAttemptToDownloadConfiguration=_shouldAttemptToDownloadConfiguration;
@property (nonatomic) BOOL shouldAttemptToUpdateConfiguration; // @synthesize shouldAttemptToUpdateConfiguration=_shouldAttemptToUpdateConfiguration;

+ (id)new;
- (void).cxx_destruct;
- (void)_didLoadSnapshot:(id)arg1;
- (id)_downloadedListResourceName;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_loadBuiltInSnapshotIfNeeded;
- (void)_loadDownloadedSnapshotIfNeeded;
- (void)_resetUpdateTimer;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_updateWhitelistIfNecessary;
- (id)_urlOfDownloadedList;
- (void)_writeConfigurationData:(id)arg1;
- (void)accessCurrentSnapshot:(CDUnknownBlockType)arg1;
- (void)accessSnapshotLoadingItIfNeeded:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBuiltInListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 snapshotClass:(Class)arg7 snapshotTransformerClass:(Class)arg8;
- (void)prepareForTermination;

@end

