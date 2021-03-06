//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPBTLERequest.h>

@interface HAP2AccessoryServerEncodingThreadBTLERequest : HAPBTLERequest
{
    unsigned char _threadRequestType;
    long long _writeOptions;
    id _requestedValue;
}

@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (readonly, nonatomic) id requestedValue; // @synthesize requestedValue=_requestedValue;
@property (readonly, nonatomic) unsigned char threadRequestType; // @synthesize threadRequestType=_threadRequestType;
@property (readonly, nonatomic) long long writeOptions; // @synthesize writeOptions=_writeOptions;

+ (id)attributeDatabaseRequest;
+ (id)executeWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 error:(id *)arg4;
+ (id)notificationRequestForCharacteristic:(id)arg1 threadRequestType:(unsigned char)arg2 enforcePDUBodyLength:(BOOL)arg3;
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
+ (id)readRequestForCharacteristic:(id)arg1;
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;

@end

