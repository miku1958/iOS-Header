//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLServiceProtocol-Protocol.h>

@class NSXPCConnection;

@interface BLServiceProxy : NSObject <BLServiceProtocol>
{
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;

- (void).cxx_destruct;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)cancelAllActiveDownloadsWithReply:(CDUnknownBlockType)arg1;
- (void)cancelDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchDownloadListWithReply:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithReply:(CDUnknownBlockType)arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(CDUnknownBlockType)arg1;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(CDUnknownBlockType)arg1;
- (id)initWithError:(out id *)arg1;
- (void)pauseDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)processAutomaticDownloadsWithReply:(CDUnknownBlockType)arg1;
- (void)purchaseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reloadFromServerWithReply:(CDUnknownBlockType)arg1;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestDownloadsWithManifestRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadsWithRestoreContentRequestItems:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(CDUnknownBlockType)arg1;
- (void)resumeDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setAutomaticDownloadEnabled:(BOOL)arg1 uiHostProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)shutdown;

@end

