//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSStreamDelegate-Protocol.h>

@class CUMFiReadRequest, CUMFiWriteRequest, EAAccessory, EASession, NSInputStream, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface CUMFiSession : NSObject <NSStreamDelegate>
{
    EASession *_eaSession;
    NSInputStream *_eaInputStream;
    NSOutputStream *_eaOutputStream;
    CUMFiReadRequest *_readRequestList;
    id *_readRequestNext;
    CUMFiReadRequest *_readRequestCurr;
    char *_readBuffer;
    unsigned long long _readLen;
    CUMFiWriteRequest *_writeRequestList;
    id *_writeRequestNext;
    CUMFiWriteRequest *_writeRequestCurr;
    const char *_writeBase;
    const char *_writePtr;
    const char *_writeEnd;
    struct LogCategory *_ucat;
    EAAccessory *_device;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_protocolString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EAAccessory *device; // @synthesize device=_device;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_handleError:(id)arg1;
- (void)_invalidate;
- (void)_processReadRequests;
- (void)_processWriteRequests;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

