//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

#import <GeoServices/GEOServiceRequestConfiguring-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring>
{
    NSNumber *_requestPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (int)dataRequestKindForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithRequestPriority:(id)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end

