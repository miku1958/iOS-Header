//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceProxy-Protocol.h>
#import <Navigation/MNNavigationServiceReconnectorDelegate-Protocol.h>

@class MNNavigationServiceReconnector, MNSettings, NSDate, NSHashTable, NSMutableArray, NSString, NSXPCConnection;
@protocol MNNavigationServiceRemoteProxyDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceReconnectorDelegate, MNNavigationServiceProxy>
{
    BOOL _applicationActive;
    NSXPCConnection *_connection;
    MNNavigationServiceReconnector *_reconnector;
    NSDate *_lastReconnectionDate;
    NSMutableArray *_recentConnectionInterruptions;
    MNSettings *_settings;
    NSHashTable *_clients;
    id<MNNavigationServiceRemoteProxyDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNNavigationServiceRemoteProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abandonConnection;
- (void)_cleanupReconnector;
- (void)_closeConnection;
- (void)_emptyMethod;
- (void)_initializeReconnectorWithDetails:(id)arg1 shouldPrepare:(BOOL)arg2;
- (id)_methodSignatureForEmptyMethod;
- (void)_openConnection;
- (void)_reconnectIfAllowed;
- (id)_remoteObjectProxy;
- (void)_updateConnection;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)changeSettings:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceReconnector:(id)arg1 didReconnectWithDetails:(id)arg2;
- (void)openForClient:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;

@end

