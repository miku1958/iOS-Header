//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/BRNonLocalVersionSending-Protocol.h>

@class BRCAppLibrary, BRCItemID, BRCServerZone, BRCStatInfo, BRCXPCClient, CKRecordID, NSString, NSURL;
@protocol BRNonLocalVersionReceiving;

__attribute__((visibility("hidden")))
@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass>
{
    id<BRNonLocalVersionReceiving> _receiver;
    BRCItemID *_itemID;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    NSString *_storagePathPrefix;
    struct NSObject *_storage;
    BRCXPCClient *_client;
    BRCServerZone *_serverZone;
    BRCAppLibrary *_appLibrary;
    CKRecordID *_recordID;
    CDUnknownBlockType _reply;
    BOOL _includeCachedVersions;
    NSURL *_logicalURL;
    NSURL *_physicalURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeCachedVersions; // @synthesize includeCachedVersions=_includeCachedVersions;
@property (readonly, nonatomic) NSURL *logicalURL; // @synthesize logicalURL=_logicalURL;
@property (readonly, nonatomic) NSURL *physicalURL; // @synthesize physicalURL=_physicalURL;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)_depsTrackingOperation;
- (id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2;
- (id)_fetchVersionsOperationWithDepsOp:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 logicalURL:(id)arg4 client:(id)arg5 XPCReceiver:(id)arg6 error:(id *)arg7;
- (oneway void)invalidate;
- (void)listNonLocalVersionsWithReply:(CDUnknownBlockType)arg1;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end

