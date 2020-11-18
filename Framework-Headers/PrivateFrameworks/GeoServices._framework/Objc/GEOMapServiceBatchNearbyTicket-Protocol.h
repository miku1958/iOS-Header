//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits, GEOSearchCategory, NSString;

@protocol GEOMapServiceBatchNearbyTicket <NSObject>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)cancel;
- (NSString *)resultSectionHeaderForCategory:(GEOSearchCategory *)arg1;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

