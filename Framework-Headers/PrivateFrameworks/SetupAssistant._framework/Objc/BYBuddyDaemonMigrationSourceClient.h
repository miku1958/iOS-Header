//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientMigrationSourceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>
{
    id<BYDeviceMigrationDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BYDeviceMigrationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
- (void).cxx_destruct;
- (void)_connectToDaemon;
- (void)cancel;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (id)init;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(CDUnknownBlockType)arg1;
- (void)setFileTransferTemplate:(id)arg1;

@end

