//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEODataRequest;
@protocol GEODataSessionTaskRules;

@protocol GEODataSessionRulesProvider <NSObject>
- (id<GEODataSessionTaskRules>)preferedRulesForRequest:(GEODataRequest *)arg1;
@end

