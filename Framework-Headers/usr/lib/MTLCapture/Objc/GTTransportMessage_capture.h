//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/NSCopying-Protocol.h>

@class GTTransport_capture, NSData, NSDictionary;

@interface GTTransportMessage_capture : NSObject <NSCopying>
{
    NSData *_payload;
    NSDictionary *_attributes;
    GTTransport_capture *_transport;
    NSData *_encodedAttributes;
    id _decodedPayload;
    unsigned int _decodedPayloadType;
    int _kind;
    unsigned int _serial;
    unsigned int _replySerial;
    unsigned int _transportSize;
}

@property (readonly, strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property (readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property (readonly, strong, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property (readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property (readonly, strong, nonatomic) GTTransport_capture *transport; // @synthesize transport=_transport;
@property (readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;

+ (id)messageWithKind:(int)arg1;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(BOOL)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 boolPayload:(BOOL)arg2;
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;
- (void)_setTransportSize:(unsigned int)arg1;
- (id)attributeForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleForKey:(id)arg1;
- (BOOL)hasBeenSent;
- (id)init;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(BOOL)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
- (id)objectPayload;
- (id)plistPayload;
- (id)stringPayload;
- (unsigned int)uint32ForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1;

@end

