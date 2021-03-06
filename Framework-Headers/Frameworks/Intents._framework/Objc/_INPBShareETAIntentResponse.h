//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareETAIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareETAIntentResponse : PBCodable <_INPBShareETAIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _mediums;
    struct _has;
    NSArray *_recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int *mediums;
@property (readonly, nonatomic) unsigned long long mediumsCount;
@property (copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (readonly) Class superclass;

+ (Class)recipientType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsMediums:(id)arg1;
- (void)addMedium:(int)arg1;
- (void)addRecipient:(id)arg1;
- (void)clearMediums;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)mediumAtIndex:(unsigned long long)arg1;
- (id)mediumsAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (void)setMediums:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

