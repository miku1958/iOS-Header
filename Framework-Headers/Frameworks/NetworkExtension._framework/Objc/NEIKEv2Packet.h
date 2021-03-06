//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEIKEv2EncryptedPayload, NEIKEv2IKESPI, NSArray;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>
{
    BOOL _isFragmented;
    BOOL _isResponse;
    BOOL _isInitiator;
    BOOL _decrypted;
    BOOL _isInbound;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
}

@property (strong) NSArray *customPayloads; // @synthesize customPayloads=_customPayloads;
@property BOOL decrypted; // @synthesize decrypted=_decrypted;
@property (strong) NEIKEv2EncryptedPayload *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property unsigned int fragmentNumber; // @synthesize fragmentNumber=_fragmentNumber;
@property (readonly) BOOL hasErrors;
@property (strong) NEIKEv2IKESPI *initiatorSPI; // @synthesize initiatorSPI=_initiatorSPI;
@property BOOL isFragmented; // @synthesize isFragmented=_isFragmented;
@property BOOL isInbound; // @synthesize isInbound=_isInbound;
@property BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property BOOL isResponse; // @synthesize isResponse=_isResponse;
@property int messageID; // @synthesize messageID=_messageID;
@property (strong) NSArray *notifications; // @synthesize notifications=_notifications;
@property (strong) NSArray *packetDatagrams; // @synthesize packetDatagrams=_packetDatagrams;
@property (strong) NSArray *rawPayloads; // @synthesize rawPayloads=_rawPayloads;
@property (readonly) NEIKEv2IKESPI *receiverSPI;
@property (strong) NEIKEv2IKESPI *responderSPI; // @synthesize responderSPI=_responderSPI;
@property (readonly) NEIKEv2IKESPI *senderSPI;
@property unsigned int totalFragments; // @synthesize totalFragments=_totalFragments;

+ (id)copyTypeDescription;
+ (id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2;
+ (id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2;
+ (BOOL)encryptPayloads;
+ (unsigned long long)exchangeType;
- (void).cxx_destruct;
- (BOOL)addNotification:(unsigned long long)arg1;
- (BOOL)addNotification:(unsigned long long)arg1 data:(id)arg2;
- (void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3;
- (BOOL)addNotifyPayload:(id)arg1;
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned int)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5;
- (id)copyNotification:(unsigned long long)arg1;
- (id)copyPacketDatagramsForIKESA:(id)arg1;
- (id)copyReceivedPacketForIKESA:(id)arg1;
- (id)copyShortDescription;
- (id)copyUnifiedData;
- (id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(BOOL)arg4;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned int)encryptedFragmentSizeForIKESA:(id)arg1;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (BOOL)hasNotification:(unsigned long long)arg1;
- (unsigned int)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(BOOL)arg2 nonESPMarker:(BOOL)arg3;
- (id)initOutbound;
- (id)initResponse:(id)arg1;
- (BOOL)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(BOOL)arg3;

@end

