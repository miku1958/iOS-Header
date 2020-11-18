//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PushKit/PKComplicationXPCClient-Protocol.h>
#import <PushKit/PKFileProviderXPCClient-Protocol.h>
#import <PushKit/PKVoIPXPCClient-Protocol.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, PKPushRegistryDelegate;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient>
{
    int _voipToken;
    int _complicationToken;
    int _fileProviderToken;
    NSSet *_desiredPushTypes;
    id<PKPushRegistryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSMutableDictionary *_pushTypeToToken;
    NSMutableDictionary *_pushTypeToConnection;
}

@property (nonatomic) int complicationToken; // @synthesize complicationToken=_complicationToken;
@property (weak) id<PKPushRegistryDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (copy) NSSet *desiredPushTypes; // @synthesize desiredPushTypes=_desiredPushTypes;
@property (nonatomic) int fileProviderToken; // @synthesize fileProviderToken=_fileProviderToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property (strong, nonatomic) NSMutableDictionary *pushTypeToConnection; // @synthesize pushTypeToConnection=_pushTypeToConnection;
@property (strong, nonatomic) NSMutableDictionary *pushTypeToToken; // @synthesize pushTypeToToken=_pushTypeToToken;
@property (nonatomic) int voipToken; // @synthesize voipToken=_voipToken;

+ (id)_pushTypeToMachServiceName;
- (void).cxx_destruct;
- (id)_createConnectionForPushType:(id)arg1;
- (void)_registerForPushType:(id)arg1;
- (void)_renewConnectionForPushTypeIfRegistered:(id)arg1;
- (void)_unregisterForPushType:(id)arg1;
- (void)complicationPayloadReceived:(id)arg1;
- (void)complicationRegistrationFailed;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)dealloc;
- (void)fileProviderPayloadReceived:(id)arg1;
- (void)fileProviderRegistrationFailed;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)pushTokenForType:(id)arg1;
- (void)voipPayloadReceived:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)voipRegistrationFailed;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;

@end

