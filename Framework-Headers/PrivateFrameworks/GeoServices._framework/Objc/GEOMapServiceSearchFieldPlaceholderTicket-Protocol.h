//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits, NSDictionary;

@protocol GEOMapServiceSearchFieldPlaceholderTicket <NSObject>

@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)submitWithHandler:(void (^)(NSString *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

