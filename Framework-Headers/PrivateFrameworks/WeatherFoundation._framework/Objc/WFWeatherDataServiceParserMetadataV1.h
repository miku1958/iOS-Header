//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, WFLocation;

__attribute__((visibility("hidden")))
@interface WFWeatherDataServiceParserMetadataV1 : NSObject
{
    BOOL _temporarilyUnavailable;
    NSDate *_readDate;
    NSDate *_expireDate;
    unsigned long long _version;
    WFLocation *_location;
    NSString *_language;
    NSString *_providerName;
    NSURL *_providerLogoURL;
    long long _dataOrigination;
}

@property (nonatomic) long long dataOrigination; // @synthesize dataOrigination=_dataOrigination;
@property (copy, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property (copy, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) WFLocation *location; // @synthesize location=_location;
@property (copy, nonatomic) NSURL *providerLogoURL; // @synthesize providerLogoURL=_providerLogoURL;
@property (copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property (copy, nonatomic) NSDate *readDate; // @synthesize readDate=_readDate;
@property (nonatomic) BOOL temporarilyUnavailable; // @synthesize temporarilyUnavailable=_temporarilyUnavailable;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

- (void).cxx_destruct;

@end

