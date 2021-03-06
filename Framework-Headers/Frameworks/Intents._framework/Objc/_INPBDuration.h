//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDuration-Protocol.h>

@class NSString;

@interface _INPBDuration : PBCodable <_INPBDuration, NSSecureCoding, NSCopying>
{
    CDStruct_85a1ec51 _has;
    int _nanos;
    long long _seconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasNanos;
@property (nonatomic) BOOL hasSeconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int nanos; // @synthesize nanos=_nanos;
@property (nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

