//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class MXMSampleTag, NSData, NSMeasurement, NSNumber, NSSet, NSString, NSUnit;

@interface MXMSample : NSObject <NSSecureCoding, NSCopying>
{
    NSUnit *_unit;
    void *_underlyingValue;
    unsigned long long _underlyingValueLength;
    NSData *_date;
    unsigned long long _timestamp;
    NSSet *_attributes;
    unsigned long long _valueType;
    unsigned long long _length;
    MXMSampleTag *_tag;
}

@property (readonly, copy, nonatomic) NSMeasurement *asMeasurementValue;
@property (readonly, copy, nonatomic) NSNumber *asNumberValue;
@property (readonly, copy, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property (readonly, nonatomic) NSData *date; // @synthesize date=_date;
@property (readonly, nonatomic) double floatValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property (readonly, copy, nonatomic) NSString *shortDesc;
@property (readonly, nonatomic) MXMSampleTag *tag; // @synthesize tag=_tag;
@property (readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, copy, nonatomic) NSUnit *unit;
@property (readonly, nonatomic) unsigned long long unsignedValue;
@property (readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeWithName:(id)arg1;
- (id)convertToUnit:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(struct __CVBuffer *)arg3;
- (const double *)numberValueDouble;

@end
