//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSMapTable, NSSet, NSString, PVPersonClusterManager;
@protocol PVFaceProtocol, PVPersonProtocol;

@protocol PVPersonPromoterDelegate <NSObject>
- (NSArray *)densityClusteringForObjects:(NSArray *)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(double (^)(id, id))arg4;
- (id<PVFaceProtocol>)keyFaceForPerson:(id<PVPersonProtocol>)arg1 qualityMeasureByFace:(NSMapTable *)arg2 updateBlock:(void (^)(float, BOOL *))arg3;
- (NSArray *)performSocialGroupsIdentifiersWithPersonClusterManager:(PVPersonClusterManager *)arg1 forPersons:(NSSet *)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(void (^)(float, BOOL *))arg4;
- (NSString *)suggestedMeIdentifierWithPersonClusterManager:(PVPersonClusterManager *)arg1 forPersons:(NSSet *)arg2 updateBlock:(void (^)(float, BOOL *))arg3;
@end

