//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class ACProtobufVariableValue, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying>
{
    NSString *_key;
    ACProtobufVariableValue *_value;
}

@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) ACProtobufVariableValue *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithObjectValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

