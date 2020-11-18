//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol DEDClientProtocol, IDSServiceDelegate, OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface DEDIDSConnection : NSObject <IDSServiceDelegate, DEDSecureArchiving>
{
    id<DEDClientProtocol> _remoteSideDelegate;
    NSObject<OS_os_log> *_log;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_dispatch_group> *_request_group;
    NSMutableArray *_availableDevices;
    id<IDSServiceDelegate> _incomingDelegate;
    CDUnknownBlockType _deviceStatusCallback;
}

@property (strong) NSMutableArray *availableDevices; // @synthesize availableDevices=_availableDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) CDUnknownBlockType deviceStatusCallback; // @synthesize deviceStatusCallback=_deviceStatusCallback;
@property (readonly) unsigned long long hash;
@property (strong) id<IDSServiceDelegate> incomingDelegate; // @synthesize incomingDelegate=_incomingDelegate;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (weak) id<DEDClientProtocol> remoteSideDelegate; // @synthesize remoteSideDelegate=_remoteSideDelegate;
@property (strong) NSObject<OS_dispatch_group> *request_group; // @synthesize request_group=_request_group;
@property (strong) NSObject<OS_dispatch_queue> *run_queue; // @synthesize run_queue=_run_queue;
@property (strong) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)packPayload:(id)arg1;
+ (id)unpackProtobuf:(id)arg1;
- (void).cxx_destruct;
- (void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)incomingDeviceReceived:(id)arg1;
- (id)initWithConroller:(id)arg1;
- (BOOL)sendMessage:(int)arg1 withData:(id)arg2 forDevice:(id)arg3 isResponse:(BOOL)arg4;
- (BOOL)sendMessage:(int)arg1 withData:(id)arg2 forID:(id)arg3 isResponse:(BOOL)arg4;
- (void)setDeviceCallback:(CDUnknownBlockType)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;

@end
