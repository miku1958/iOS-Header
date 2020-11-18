//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlugInKit/PKPlugInCore.h>

#import <PlugInKit/NSXPCConnectionDelegate-Protocol.h>
#import <PlugInKit/PKPlugInPrivate-Protocol.h>

@class NSArray, NSBundle, NSDate, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;
@protocol OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate>
{
    BOOL _terminating;
    unsigned int _useCount;
    NSUserDefaults *_defaults;
    CDUnknownBlockType _notificationBlock;
    NSXPCConnection *_pluginConnection;
    NSObject<OS_dispatch_queue> *__replyQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__startQueue;
    id<PKCorePlugInProtocol> _service;
    id<PKCorePlugInProtocol> _syncService;
    NSUUID *_supersedingUUID;
    id<PKPlugIn> _supersededBy;
    NSUUID *_multipleInstanceUUID;
    NSString *_serviceExtension;
    NSDictionary *_discoveryExtensions;
    NSArray *_sandboxExtensions;
    id _queuedHostPrincipal;
    Protocol *_queuedHostProtocol;
    unsigned long long _state;
    id _plugInPrincipal;
    id _embeddedPrincipal;
    NSBundle *_embeddedBundle;
    NSDate *_beganUsingAt;
    NSDictionary *_sourceForm;
    NSDictionary *_environment;
}

@property (strong) NSObject<OS_dispatch_queue> *_replyQueue; // @synthesize _replyQueue=__replyQueue;
@property (strong) NSObject<OS_dispatch_queue> *_startQueue; // @synthesize _startQueue=__startQueue;
@property (strong) NSObject<OS_dispatch_queue> *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property (readonly) BOOL active;
@property (readonly) NSDictionary *attributes;
@property (strong) NSDate *beganUsingAt; // @synthesize beganUsingAt=_beganUsingAt;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSURL *containingUrl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, copy) NSString *description;
@property (strong) NSDictionary *discoveryExtensions; // @synthesize discoveryExtensions=_discoveryExtensions;
@property (readonly) NSUUID *effectiveUUID;
@property (strong) NSBundle *embeddedBundle; // @synthesize embeddedBundle=_embeddedBundle;
@property (strong) id embeddedPrincipal; // @synthesize embeddedPrincipal=_embeddedPrincipal;
@property (readonly) NSDictionary *entitlements;
@property (strong) NSDictionary *environment; // @synthesize environment=_environment;
@property (strong) NSDictionary *extensionState;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (strong) NSUUID *multipleInstanceUUID; // @synthesize multipleInstanceUUID=_multipleInstanceUUID;
@property (copy) CDUnknownBlockType notificationBlock; // @synthesize notificationBlock=_notificationBlock;
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *plugInDictionary;
@property (strong) id plugInPrincipal; // @synthesize plugInPrincipal=_plugInPrincipal;
@property (strong) NSXPCConnection *pluginConnection; // @synthesize pluginConnection=_pluginConnection;
@property (strong) id queuedHostPrincipal; // @synthesize queuedHostPrincipal=_queuedHostPrincipal;
@property (strong) Protocol *queuedHostProtocol; // @synthesize queuedHostProtocol=_queuedHostProtocol;
@property (strong) NSArray *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property (strong) id<PKCorePlugInProtocol> service; // @synthesize service=_service;
@property (strong) NSString *serviceExtension; // @synthesize serviceExtension=_serviceExtension;
@property (strong) NSDictionary *sourceForm; // @synthesize sourceForm=_sourceForm;
@property (readonly) BOOL spent;
@property unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (strong) id<PKPlugIn> supersededBy; // @synthesize supersededBy=_supersededBy;
@property (strong) NSUUID *supersedingUUID; // @synthesize supersedingUUID=_supersedingUUID;
@property (strong) id<PKCorePlugInProtocol> syncService; // @synthesize syncService=_syncService;
@property BOOL terminating; // @synthesize terminating=_terminating;
@property (readonly) NSDate *timestamp;
@property (readonly) NSURL *url;
@property unsigned int useCount; // @synthesize useCount=_useCount;
@property long long userElection;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;

- (void).cxx_destruct;
- (void)beginUsing:(CDUnknownBlockType)arg1;
- (BOOL)beginUsingWithError:(id *)arg1;
- (void)changeState:(unsigned long long)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)createInstanceWithUUID:(id)arg1;
- (void)endUsing:(CDUnknownBlockType)arg1;
- (id)initWithForm:(id)arg1;
- (BOOL)loadExtensions:(id)arg1 error:(id *)arg2;
- (void)messageTraceUsage;
- (void)preparePlugInUsingService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)setBootstrap;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)setReplyQueue:(id)arg1;
- (void)startPlugInSynchronously:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspend;
- (void)unwind:(unsigned long long)arg1 force:(BOOL)arg2;
- (void)updateFromForm:(id)arg1;
- (BOOL)useBundle:(id)arg1 error:(id *)arg2;

@end

