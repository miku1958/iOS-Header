//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CRCarPlayAppBlacklist;
@protocol OS_dispatch_queue;

@interface CRCarPlayAppPolicyEvaluator : NSObject
{
    CARSessionStatus *_sessionStatus;
    BOOL _geoSupported;
    BOOL _geo_queue_geoSupported;
    BOOL _evaluatorWantsGeoManagement;
    CRCarPlayAppBlacklist *_blacklist;
    NSObject<OS_dispatch_queue> *_geoQueue;
}

@property (strong, nonatomic) CRCarPlayAppBlacklist *blacklist; // @synthesize blacklist=_blacklist;
@property (nonatomic) BOOL evaluatorWantsGeoManagement; // @synthesize evaluatorWantsGeoManagement=_evaluatorWantsGeoManagement;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // @synthesize geoQueue=_geoQueue;
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported; // @synthesize geoSupported=_geoSupported;
@property (nonatomic) BOOL geo_queue_geoSupported; // @synthesize geo_queue_geoSupported=_geo_queue_geoSupported;

+ (id)_carIntentIdentifiers;
+ (id)allIntentIdentifiers;
- (void).cxx_destruct;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2;
- (unsigned long long)_applicationCategoryForAppDeclaration:(id)arg1 policy:(id)arg2;
- (BOOL)_checkIfDeclaration:(id)arg1 supportsIntents:(id)arg2 requireAllIntents:(BOOL)arg3;
- (id)_vehicleProtocolsForCertificateSerial:(id)arg1;
- (BOOL)_vehicleProtocolsIntersectAppProtocols:(id)arg1 certificateSerial:(id)arg2;
- (id)currentSession;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (id)effectivePolicyForAppDeclaration:(id)arg1 inVehicleWithCertificateSerial:(id)arg2;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setWantsGeoSupported;
- (void)updateGeoSupported;

@end
