//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareETAIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareETAIntent : PBCodable <_INPBShareETAIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (readonly) Class superclass;

+ (Class)recipientType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
