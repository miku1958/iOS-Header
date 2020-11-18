//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

@interface CUBonjourDevice : NSObject
{
    unsigned char _deviceIDBytes[6];
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_txtDictionary;
    NSData *_txtData;
    NSDictionary *_deviceInfo;
}

@property (copy, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (copy, nonatomic) NSData *txtData; // @synthesize txtData=_txtData;
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;

- (void).cxx_destruct;
- (void)_updateTXTDictionary:(id)arg1;
- (id)copyConnectionStringWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (id)description;
- (id)shortDescription;
- (unsigned int)updateWithBonjourDeviceInfo:(id)arg1;

@end

