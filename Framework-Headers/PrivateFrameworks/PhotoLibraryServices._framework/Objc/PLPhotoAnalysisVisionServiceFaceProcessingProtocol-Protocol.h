//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)faceProcessingStatusForUserInterfaceWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)personPromoterStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)processPersonsWithContext:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)rebuildPersonsWithContext:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)reclusterFacesWithContext:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)renderFaceTilesForFaceLocalIdentifiers:(NSArray *)arg1 inAssetWithLocalIdentifier:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)requestSuggestedMePersonIdentifierWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)resetFaceClusteringStateWithContext:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)resetPeopleWithContext:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)suggestPersonsForPersonWithLocalIdentifier:(NSString *)arg1 toBeConfirmedPersonSuggestions:(NSArray *)arg2 toBeRejectedPersonSuggestions:(NSArray *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(NSArray *)arg1 forceUpdate:(BOOL)arg2 context:(NSDictionary *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)validateClusterCacheWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

