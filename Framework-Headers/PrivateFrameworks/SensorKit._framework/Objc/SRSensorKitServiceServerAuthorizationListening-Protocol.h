//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString;

@protocol SRSensorKitServiceServerAuthorizationListening
- (void)addBundleIdentifier:(NSString *)arg1 toPendingAuthorizations:(NSSet *)arg2 reply:(void (^)(void))arg3;
- (void)addBundlePath:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(void))arg3;
- (void)dataCollectionEnabled:(void (^)(NSNumber *))arg1;
- (void)fetchBundleIdentifiersWithPendingAuthorizations:(void (^)(NSDictionary *))arg1;
- (void)fetchBundlePathMap:(void (^)(NSDictionary *))arg1;
- (void)legacyResearchStudyBundleIDs:(void (^)(NSArray *))arg1;
- (void)legacyResearchStudyEntitlement:(void (^)(NSString *))arg1;
- (void)registerForAuthorizationChangeNotificationsWithEffectiveBundleId:(NSString *)arg1;
- (void)removeBundleIdentifier:(NSString *)arg1 fromPendingAuthorizations:(NSSet *)arg2 reply:(void (^)(void))arg3;
- (void)removeBundleIdentifierFromPathMap:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)requiredAppDataDeepLinkIdentifier:(void (^)(NSString *))arg1;
- (void)requiredAppIdentifier:(void (^)(NSString *))arg1;
- (void)requiredAppStudiesDeepLinkIdentifier:(void (^)(NSString *))arg1;
- (void)requiredAppiTunesIdentifier:(void (^)(NSString *))arg1;
- (void)requiredOnboardingCompleted:(void (^)(NSNumber *))arg1;
- (void)retrieveCurrentAuthorizedServicesWithReply:(void (^)(NSSet *))arg1;
- (void)serviceStartTimeForService:(NSString *)arg1 reply:(void (^)(NSNumber *))arg2;
- (void)setDataCollectionEnabled:(BOOL)arg1;
- (void)setRequiredOnboardingCompleted:(BOOL)arg1;
- (void)setServiceStartTimeForService:(NSString *)arg1;
- (void)studyBundleIdPrefix:(void (^)(NSString *))arg1;
@end
