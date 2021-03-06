//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NSData;

@interface NFCNDEFPayload : NSObject <NSSecureCoding>
{
    unsigned long long _chunkSize;
    unsigned char _typeNameFormat;
    NSData *_type;
    NSData *_identifier;
    NSData *_payload;
}

@property (copy, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (copy, nonatomic) NSData *type; // @synthesize type=_type;
@property (nonatomic) unsigned char typeNameFormat; // @synthesize typeNameFormat=_typeNameFormat;

+ (BOOL)supportsSecureCoding;
+ (id)wellKnowTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;
+ (id)wellKnownTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;
+ (id)wellKnownTypeURIPayloadWithString:(id)arg1;
+ (id)wellKnownTypeURIPayloadWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)asData;
- (unsigned long long)chunkSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)resolveURIString:(id)arg1;
- (void)setChunkSize:(unsigned long long)arg1;
- (id)wellKnownTypeTextPayloadWithLocale:(id *)arg1;
- (id)wellKnownTypeURIPayload;

@end

