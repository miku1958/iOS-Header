//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBDeviceInfo : PBCodable <NSCopying>
{
    long long _deviceDstOffset;
    long long _deviceUtcOffset;
    NSString *_deviceAppBundleId;
    NSString *_deviceAppVersion;
    NSString *_deviceOsVersion;
    NSMutableArray *_devicePreferredLanguages;
    NSString *_devicePushToken;
    NSString *_deviceTimezone;
    int _deviceTokenEnv;
    NSString *_deviceType;
    struct {
        unsigned int deviceDstOffset:1;
        unsigned int deviceUtcOffset:1;
        unsigned int deviceTokenEnv:1;
    } _has;
}

@property (strong, nonatomic) NSString *deviceAppBundleId; // @synthesize deviceAppBundleId=_deviceAppBundleId;
@property (strong, nonatomic) NSString *deviceAppVersion; // @synthesize deviceAppVersion=_deviceAppVersion;
@property (nonatomic) long long deviceDstOffset; // @synthesize deviceDstOffset=_deviceDstOffset;
@property (strong, nonatomic) NSString *deviceOsVersion; // @synthesize deviceOsVersion=_deviceOsVersion;
@property (strong, nonatomic) NSMutableArray *devicePreferredLanguages; // @synthesize devicePreferredLanguages=_devicePreferredLanguages;
@property (strong, nonatomic) NSString *devicePushToken; // @synthesize devicePushToken=_devicePushToken;
@property (strong, nonatomic) NSString *deviceTimezone; // @synthesize deviceTimezone=_deviceTimezone;
@property (nonatomic) int deviceTokenEnv; // @synthesize deviceTokenEnv=_deviceTokenEnv;
@property (strong, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property (nonatomic) long long deviceUtcOffset; // @synthesize deviceUtcOffset=_deviceUtcOffset;
@property (readonly, nonatomic) BOOL hasDeviceAppBundleId;
@property (readonly, nonatomic) BOOL hasDeviceAppVersion;
@property (nonatomic) BOOL hasDeviceDstOffset;
@property (readonly, nonatomic) BOOL hasDeviceOsVersion;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasDeviceTimezone;
@property (nonatomic) BOOL hasDeviceTokenEnv;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (nonatomic) BOOL hasDeviceUtcOffset;

+ (Class)devicePreferredLanguageType;
- (void).cxx_destruct;
- (void)addDevicePreferredLanguage:(id)arg1;
- (void)clearDevicePreferredLanguages;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)devicePreferredLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicePreferredLanguagesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
