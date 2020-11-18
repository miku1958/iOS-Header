//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PLRevGeoLocationInfo;
@protocol GEOMapServiceTicket, NSCopying;

@interface PLMomentAnalyzerGeoRequestInfo : NSObject
{
    unsigned long long _requestType;
    NSObject<NSCopying> *_momentId;
    NSString *_momentUuid;
    NSArray *_assetIds;
    id<GEOMapServiceTicket> _reverseGeocodeRequest;
    unsigned long long _failureCount;
    NSArray *_extraAssetIds;
    NSArray *_extraLocations;
    PLRevGeoLocationInfo *_revGeoLocationInfo;
    unsigned long long _signpostId;
}

@property (copy, nonatomic) NSArray *assetIds; // @synthesize assetIds=_assetIds;
@property (copy, nonatomic) NSArray *extraAssetIds; // @synthesize extraAssetIds=_extraAssetIds;
@property (readonly, nonatomic, getter=hasExtraData) BOOL extraData;
@property (copy, nonatomic) NSArray *extraLocations; // @synthesize extraLocations=_extraLocations;
@property (nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property (strong, nonatomic) NSObject<NSCopying> *momentId; // @synthesize momentId=_momentId;
@property (copy, nonatomic) NSString *momentUuid; // @synthesize momentUuid=_momentUuid;
@property (nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) PLRevGeoLocationInfo *revGeoLocationInfo; // @synthesize revGeoLocationInfo=_revGeoLocationInfo;
@property (strong, nonatomic) id<GEOMapServiceTicket> reverseGeocodeRequest; // @synthesize reverseGeocodeRequest=_reverseGeocodeRequest;
@property (nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end

