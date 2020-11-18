//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPBTLETransactionIdentifier, NSData, NSOperationQueue;
@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;

@interface HAPBTLEControlOutputStream : NSObject
{
    unsigned char _type;
    BOOL _complete;
    BOOL _open;
    id<HAPBTLEControlOutputStreamDelegate> _delegate;
    HAPBTLETransactionIdentifier *_transactionIdentifier;
    NSData *_payload;
    unsigned long long _mtuLength;
    double _timeoutInterval;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _controlPayloadWrittenLength;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) unsigned long long controlPayloadWrittenLength; // @synthesize controlPayloadWrittenLength=_controlPayloadWrittenLength;
@property (weak) id<HAPBTLEControlOutputStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long mtuLength; // @synthesize mtuLength=_mtuLength;
@property (nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property (readonly, nonatomic) unsigned char type; // @synthesize type=_type;

+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_complete;
- (id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id *)arg2;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)close;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5;
- (void)open;
- (unsigned long long)remainingControlPayloadLength;
- (void)sendNextPayloadFragment;
- (id)shortDescription;

@end

