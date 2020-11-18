//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientAuthorizationListening-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSSet, NSString, NSXPCConnection;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening>
{
    BOOL _prerequisiteMet;
    int _registrationToken;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSSet *_actualAuthorizedServices;
}

@property (copy) NSSet *actualAuthorizedServices; // @synthesize actualAuthorizedServices=_actualAuthorizedServices;
@property (readonly, copy) NSSet *authorizedServices;
@property (readonly, copy) NSDictionary *bundleIdentifiersPendingAuthorization;
@property (readonly, copy) NSDictionary *bundlePathMap;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) BOOL dataCollectionEnabled;
@property (readonly, nonatomic) NSArray *legacyResearchStudyBundleIDs;
@property (readonly, nonatomic) NSString *legacyResearchStudyEntitlement;
@property (strong, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property BOOL prerequisiteMet; // @synthesize prerequisiteMet=_prerequisiteMet;
@property int registrationToken; // @synthesize registrationToken=_registrationToken;
@property (readonly, copy, nonatomic) NSString *requiredAppDataDeepLinkIdentifier;
@property (readonly, copy, nonatomic) NSString *requiredAppIdentifier;
@property (readonly, copy, nonatomic) NSString *requiredAppStudiesDeepLinkIdentifier;
@property (readonly, copy, nonatomic) NSString *requiredAppiTunesIdentifier;
@property (nonatomic) BOOL requiredOnboardingCompleted;
@property (readonly, copy, nonatomic) NSString *studyBundleIdPrefix;

+ (void)initialize;
+ (id)sharedInstance;
- (void)addBundle:(id)arg1 toPendingAuthorizations:(id)arg2;
- (void)addListener:(id)arg1;
- (void)addListener:(id)arg1 forBundleId:(id)arg2;
- (void)addToBundlePathMap:(id)arg1;
- (void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)notifyAuthorizationChangeForBundleIdentifier:(id)arg1;
- (void)registerForPrerequisitesUpdated;
- (void)removeBundle:(id)arg1 fromPendingAuthorizations:(id)arg2;
- (void)removeFromBundlePathMap:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)serviceStartTimeForService:(id)arg1;
- (void)setServiceStartTimeForService:(id)arg1;
- (void)unregisterForPrerequisitesUpdated;

@end
