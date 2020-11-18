//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable>
{
    NSArray *_preferredLanguages;
    NSString *_deviceType;
    long long _utcOffset;
    long long _dstOffset;
    NSString *_appVersion;
    NSString *_osVersion;
    NSString *_countryCode;
}

@property (readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property (readonly, nonatomic) long long dstOffset; // @synthesize dstOffset=_dstOffset;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property (readonly, copy, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long utcOffset; // @synthesize utcOffset=_utcOffset;

+ (id)defaultDeviceInfo;
+ (id)defaultDeviceInfoWithAppVersion:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end
