//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _hsiVersionMajor;
    unsigned char _hsiVersionMinor;
    NSString *_roseFirmwareVersion;
    unsigned long long _hardwareVersion;
    NSNumber *_addlInfoSize;
    NSNumber *_apFirmwareVersion;
    NSNumber *_dspFirmwareVersion;
    NSString *_target;
    NSNumber *_calDataVersion;
    NSNumber *_moduleID;
    NSNumber *_modemInitVersion;
    NSString *_extraBytes;
}

@property (copy) NSNumber *addlInfoSize; // @synthesize addlInfoSize=_addlInfoSize;
@property (copy) NSNumber *apFirmwareVersion; // @synthesize apFirmwareVersion=_apFirmwareVersion;
@property (copy) NSNumber *calDataVersion; // @synthesize calDataVersion=_calDataVersion;
@property (copy) NSNumber *dspFirmwareVersion; // @synthesize dspFirmwareVersion=_dspFirmwareVersion;
@property (copy) NSString *extraBytes; // @synthesize extraBytes=_extraBytes;
@property (readonly, nonatomic) unsigned long long hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property (readonly, nonatomic) unsigned char hsiVersionMajor; // @synthesize hsiVersionMajor=_hsiVersionMajor;
@property (readonly, nonatomic) unsigned char hsiVersionMinor; // @synthesize hsiVersionMinor=_hsiVersionMinor;
@property (copy) NSNumber *modemInitVersion; // @synthesize modemInitVersion=_modemInitVersion;
@property (copy) NSNumber *moduleID; // @synthesize moduleID=_moduleID;
@property (readonly, nonatomic) NSString *roseFirmwareVersion; // @synthesize roseFirmwareVersion=_roseFirmwareVersion;
@property (copy) NSString *target; // @synthesize target=_target;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHelloResponse:(const struct HelloResponse *)arg1;
- (id)initWithRoseFirmwareVersion:(id)arg1 hsiVersionMajor:(unsigned char)arg2 hsiVersionMinor:(unsigned char)arg3 hardwareVersion:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end

