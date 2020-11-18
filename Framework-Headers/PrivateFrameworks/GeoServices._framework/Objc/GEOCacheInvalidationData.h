//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOCacheInvalidationData : NSObject
{
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray *_versionDomains;
}

@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property (readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property (readonly, nonatomic) NSArray *versionDomains; // @synthesize versionDomains=_versionDomains;

- (void).cxx_destruct;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;

@end
