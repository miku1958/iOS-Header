//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCFileCoordinationWriting-Protocol.h>
#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, NSString;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule, BRCFileCoordinationWriting>
{
    BRCAccountSession *_session;
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;

@end

