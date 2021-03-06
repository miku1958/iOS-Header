//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface SPAccessoryInformation : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _batteryType;
    unsigned char _batteryState;
    unsigned int _accessoryCapabilities;
    NSData *_productData;
    NSString *_manufacturerName;
    NSString *_modelName;
    NSString *_firmwareVersion;
    NSString *_protocolVersion;
    unsigned long long _accessoryCategory;
}

@property (nonatomic) unsigned int accessoryCapabilities; // @synthesize accessoryCapabilities=_accessoryCapabilities;
@property (nonatomic) unsigned long long accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property (nonatomic) unsigned char batteryState; // @synthesize batteryState=_batteryState;
@property (nonatomic) unsigned char batteryType; // @synthesize batteryType=_batteryType;
@property (copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property (copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property (copy, nonatomic) NSData *productData; // @synthesize productData=_productData;
@property (copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductData:(id)arg1 manufacturerName:(id)arg2 modelName:(id)arg3 firmwareVersion:(id)arg4 protocolVersion:(id)arg5 accessoryCategory:(unsigned long long)arg6 accessoryCapabilities:(unsigned int)arg7 batteryType:(unsigned char)arg8 batteryState:(unsigned char)arg9;

@end

