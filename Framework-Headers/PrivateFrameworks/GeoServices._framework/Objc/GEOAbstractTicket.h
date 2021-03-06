//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODataRequestThrottlerToken, GEOMapServiceTraits, NSDictionary;

@interface GEOAbstractTicket : NSObject
{
    GEOMapServiceTraits *_traits;
    unsigned long long _cachePolicy;
    NSDictionary *_responseUserInfo;
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSDictionary *responseUserInfo; // @synthesize responseUserInfo=_responseUserInfo;
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithTraits:(id)arg1;
- (void)setThrottlerToken:(id)arg1;

@end

