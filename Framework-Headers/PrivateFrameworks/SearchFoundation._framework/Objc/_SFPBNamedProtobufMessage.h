//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBNamedProtobufMessage-Protocol.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding>
{
    NSData *_protobufMessageData;
    NSString *_protobufMessageName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *protobufMessageData; // @synthesize protobufMessageData=_protobufMessageData;
@property (copy, nonatomic) NSString *protobufMessageName; // @synthesize protobufMessageName=_protobufMessageName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

