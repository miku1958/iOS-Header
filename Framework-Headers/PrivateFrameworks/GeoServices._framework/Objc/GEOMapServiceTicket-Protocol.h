//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, GEORPPlaceInfo, GEORelatedSearchSuggestion, NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceTicket <NSObject>

@property (readonly, nonatomic) NSArray *browseCategories;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) NSString *resultSectionHeader;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4 queue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 timeout:(long long)arg3 networkActivity:(void (^)(BOOL))arg4 queue:(NSObject<OS_dispatch_queue> *)arg5;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
@end

