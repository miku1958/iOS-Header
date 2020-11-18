//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CPLFileWatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CPLFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
    NSURL *_fileURL;
    id<CPLFileWatcherDelegate> _delegate;
}

@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;

- (void).cxx_destruct;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingNode;
- (void)_stopWatchingParent;
- (void)_updateWatchingNode;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)startWatching;
- (void)stopWatching;

@end

