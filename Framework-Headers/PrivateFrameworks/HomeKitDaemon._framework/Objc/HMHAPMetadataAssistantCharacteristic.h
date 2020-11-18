//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding>
{
    BOOL _supportsLocalization;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    NSString *_writeHAPCharacteristicName;
    NSString *_format;
    NSDictionary *_values;
    NSDictionary *_outValues;
    NSString *_readHAPCharacteristicType;
    NSString *_writeHAPCharacteristicType;
}

@property (strong, nonatomic) NSString *format; // @synthesize format=_format;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSDictionary *outValues; // @synthesize outValues=_outValues;
@property (strong, nonatomic) NSString *readHAPCharacteristicName; // @synthesize readHAPCharacteristicName=_readHAPCharacteristicName;
@property (strong, nonatomic) NSString *readHAPCharacteristicType; // @synthesize readHAPCharacteristicType=_readHAPCharacteristicType;
@property (nonatomic) BOOL supportsLocalization; // @synthesize supportsLocalization=_supportsLocalization;
@property (strong, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property (strong, nonatomic) NSString *writeHAPCharacteristicName; // @synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName;
@property (strong, nonatomic) NSString *writeHAPCharacteristicType; // @synthesize writeHAPCharacteristicType=_writeHAPCharacteristicType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
