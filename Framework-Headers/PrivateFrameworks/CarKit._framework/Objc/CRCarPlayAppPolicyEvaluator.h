//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CRCarPlayAppBlacklist, NSSet;

@interface CRCarPlayAppPolicyEvaluator : NSObject
{
    CARSessionStatus *_sessionStatus;
    BOOL _geoSupported;
    CRCarPlayAppBlacklist *_blacklist;
    NSSet *__simulatedAccessoryProtocols;
}

@property (strong, nonatomic) NSSet *_simulatedAccessoryProtocols; // @synthesize _simulatedAccessoryProtocols=__simulatedAccessoryProtocols;
@property (strong, nonatomic) CRCarPlayAppBlacklist *blacklist; // @synthesize blacklist=_blacklist;
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported; // @synthesize geoSupported=_geoSupported;

+ (id)_carIntentIdentifiers;
- (void).cxx_destruct;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2;
- (BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2;
- (BOOL)_connectedProtocolsIntersectsAppProtocols:(id)arg1;
- (id)_sessionStatus;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(CDUnknownBlockType)arg1;
- (id)init;

@end

