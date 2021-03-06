//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLFindMyAccessoryFirmwareVersion : NSObject
{
    struct {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned short _field5;
        unsigned short _field6;
        unsigned short _field7;
        unsigned char _field8;
        unsigned char _field9;
    } *_version;
}

@property (readonly) unsigned long long calibrationDataVersion;
@property (readonly) unsigned long long hardwareVersion;
@property (readonly) unsigned long long roseAPVersion;
@property (readonly) unsigned long long roseDSPVersion;
@property (readonly) NSString *rtKitVersion;
@property (readonly) NSString *specificationVersion;
@property (readonly) NSString *vanBurenVersion;

- (void)dealloc;
- (id)description;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;

@end

