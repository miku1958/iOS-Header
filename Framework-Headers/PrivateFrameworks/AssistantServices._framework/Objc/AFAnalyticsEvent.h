//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _deliveryStream;
    long long _type;
    unsigned long long _timestamp;
    long long _contextDataType;
    NSData *_contextData;
}

@property (readonly, copy, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property (readonly, nonatomic) long long contextDataType; // @synthesize contextDataType=_contextDataType;
@property (readonly, nonatomic) unsigned long long deliveryStream; // @synthesize deliveryStream=_deliveryStream;
@property (readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)eventsReferenceTime;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)contextDataAsDictionary;
- (id)contextDataAsProtobuf;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateStamp;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeliveryStream:(unsigned long long)arg1 type:(long long)arg2 timestamp:(unsigned long long)arg3 contextDataType:(long long)arg4 contextData:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)legacyTypeName;
- (id)typeName;

@end
