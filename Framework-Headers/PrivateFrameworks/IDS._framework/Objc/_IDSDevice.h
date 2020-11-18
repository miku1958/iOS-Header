//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, NSArray, NSData, NSDate, NSDictionary, NSInputStream, NSOutputStream, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_info;
    NSString *_serviceToken;
    CUTWeakReference *_account;
    int _socket;
    int _nearbyToken;
    int _lastActivityToken;
    BOOL _nearby;
    BOOL _connected;
    CDUnknownBlockType _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
}

@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSString *deviceColor;
@property (readonly, strong, nonatomic) NSString *enclosureColor;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSArray *identities;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isHSATrusted;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, strong, nonatomic) NSDate *lastActivityDate;
@property (readonly, strong, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) BOOL locallyPresent;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, strong, nonatomic) NSString *modelIdentifier;
@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (strong, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, strong, nonatomic) NSData *pushToken;
@property (readonly, strong, nonatomic) NSString *service;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsMMSRelay;
@property (readonly, nonatomic) BOOL supportsPhoneCalls;
@property (readonly, nonatomic) BOOL supportsSMSRelay;
@property (readonly, nonatomic) BOOL supportsTethering;
@property (readonly, nonatomic) BOOL supportsiCloudPairing;
@property (readonly, strong, nonatomic) NSString *uniqueID;
@property (readonly, strong, nonatomic) NSString *uniqueIDOverride;

- (void)_addIdentity:(id)arg1;
- (void)_connect;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (void)_setAccount:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (int)socketForDomain:(id)arg1;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end

