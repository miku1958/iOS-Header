//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, GEORPPlaceInfo, GEORelatedSearchSuggestion, NSArray, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol MKMapServiceTicket <NSObject>

@property (readonly, nonatomic) GEOMapRegion *boundingRegion;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *exactMapItems;
@property (readonly, nonatomic) NSArray *refinedMapItems;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) double requestResponseTime;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
@end

