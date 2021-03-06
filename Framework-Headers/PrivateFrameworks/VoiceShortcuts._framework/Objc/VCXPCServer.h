//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSXPCConnectionDelegate-Protocol.h>
#import <VoiceShortcuts/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint, VCCKShortcutSyncCoordinator, VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager;
@protocol VCDatabaseProvider, VCSyncDataEndpoint;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>
{
    BOOL _skipEntitlementsCheck;
    VCCoreDuetListener *_coreDuetListener;
    VCVoiceShortcutManager *_voiceShortcutManager;
    WFTriggerManager *_triggerManager;
    NSXPCListener *_xpcListener;
    id<VCDatabaseProvider> _databaseProvider;
    VCCKShortcutSyncCoordinator *_syncCoordinator;
    id<VCSyncDataEndpoint> _syncDataEndpoint;
}

@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // @synthesize coreDuetListener=_coreDuetListener;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL skipEntitlementsCheck; // @synthesize skipEntitlementsCheck=_skipEntitlementsCheck;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint; // @synthesize syncDataEndpoint=_syncDataEndpoint;
@property (readonly, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager; // @synthesize voiceShortcutManager=_voiceShortcutManager;
@property (readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;

- (void).cxx_destruct;
- (id)exportedXPCInterface;
- (id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

