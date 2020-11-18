//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SRSensorKitServiceServerAuthorizationListening
- (void)legacyResearchStudyBundleIDs:(void (^)(NSArray *))arg1;
- (void)legacyResearchStudyEntitlement:(void (^)(NSString *))arg1;
- (void)onboardingAirGapEnabled:(void (^)(BOOL))arg1;
- (void)partnerAppIdentifiersWithReply:(void (^)(NSArray *))arg1;
- (void)registerForAuthorizationChangeNotificationsWithEffectiveBundleId:(NSString *)arg1;
- (void)retrieveCurrentAuthorizedServicesWithReply:(void (^)(NSSet *, NSSet *, long long))arg1;
- (void)setDataCollectionEnabled:(BOOL)arg1;
- (void)setFirstRunOnboardingCompleted:(BOOL)arg1;
- (void)studyBundleIdentifierForPartnerApp:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
@end
