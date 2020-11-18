//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLEControlOutputStream, HAPBTLETransactionIdentifier, HAPCharacteristic, HAPService, HMFBlockOperation, HMFTimer, NSData;

@interface HAPBTLERequest : HMFObject
{
    unsigned char _type;
    BOOL _encrypted;
    BOOL _finished;
    HAPBTLETransactionIdentifier *_identifier;
    HAPService *_service;
    HAPCharacteristic *_characteristic;
    NSData *_body;
    double _timeoutInterval;
    HMFBlockOperation *_operation;
    HAPBTLEControlOutputStream *_controlOutputStream;
    HMFTimer *_responseTimer;
}

@property (readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property (readonly, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (strong, nonatomic) HAPBTLEControlOutputStream *controlOutputStream; // @synthesize controlOutputStream=_controlOutputStream;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) HMFBlockOperation *operation; // @synthesize operation=_operation;
@property (strong, nonatomic) HMFTimer *responseTimer; // @synthesize responseTimer=_responseTimer;
@property (readonly, nonatomic) HAPService *service; // @synthesize service=_service;
@property (readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property (readonly, nonatomic) unsigned char type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)_serializeHeader;
- (void)cancelWithError:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(BOOL)arg4 timeoutInterval:(double)arg5;
- (id)serialize;
- (id)shortDescription;

@end

