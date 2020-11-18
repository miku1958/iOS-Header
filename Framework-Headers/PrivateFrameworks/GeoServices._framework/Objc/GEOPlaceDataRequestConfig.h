//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig
{
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
}

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (int)dataRequestKindForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (BOOL)shouldThrottleRequests;
- (double)timeout;
- (unsigned long long)urlType;

@end

