//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPCharacteristic, HAPPairingIdentity, NSArray, NSData;
@protocol HAP2AccessoryCharacteristicEncodableBodyValue, HAP2AccessoryCharacteristicEncodedData, HAP2EncodedCharacteristicRequest, HAP2EncodedRequest, HAP2EncodedResponse;

@protocol HAP2AccessoryServerEncoding <NSObject>

@property (readonly, nonatomic) unsigned long long encodingFeatures;

- (id<HAP2AccessoryCharacteristicEncodableBodyValue>)decodeBodyData:(id<HAP2AccessoryCharacteristicEncodedData>)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (NSData *)encodeBodyValue:(id<HAP2AccessoryCharacteristicEncodableBodyValue>)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (NSArray *)eventsForData:(NSData *)arg1 error:(id *)arg2;
- (id<HAP2EncodedCharacteristicRequest>)executeWriteRequestForCharacteristics:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)groupingsForReadRequestsForCharacteristics:(NSArray *)arg1;
- (NSArray *)groupingsForWriteRequestsForCharacteristics:(NSArray *)arg1;
- (NSArray *)notificationRequestsForCharacteristics:(NSArray *)arg1 type:(unsigned long long)arg2 error:(id *)arg3;
- (id<HAP2EncodedCharacteristicRequest>)prepareWriteRequestForCharacteristics:(NSArray *)arg1 ttl:(double)arg2 error:(id *)arg3;
- (id<HAP2EncodedRequest>)readRequestForAttributeDatabaseWithEncryption:(BOOL)arg1 error:(id *)arg2;
- (id<HAP2EncodedCharacteristicRequest>)readRequestForCharacteristics:(NSArray *)arg1 shouldEncrypt:(BOOL)arg2 error:(id *)arg3;
- (id<HAP2EncodedRequest>)requestToAddPairing:(HAPPairingIdentity *)arg1 characteristic:(HAPCharacteristic *)arg2 error:(id *)arg3;
- (id<HAP2EncodedRequest>)requestToListPairingsWithCharacteristic:(HAPCharacteristic *)arg1 error:(id *)arg2;
- (id<HAP2EncodedRequest>)requestToRemovePairing:(HAPPairingIdentity *)arg1 characteristic:(HAPCharacteristic *)arg2 error:(id *)arg3;
- (id<HAP2EncodedResponse>)responseForRequest:(id<HAP2EncodedRequest>)arg1 bodyData:(NSData *)arg2 error:(id *)arg3;
- (id<HAP2EncodedRequest>)unpairedIdentifyRequestWithError:(id *)arg1;
- (id<HAP2EncodedCharacteristicRequest>)writeRequestForCharacteristics:(NSArray *)arg1 shouldEncrypt:(BOOL)arg2 error:(id *)arg3;
@end

