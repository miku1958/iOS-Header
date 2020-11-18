//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, TKSmartCardSlot;
@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject
{
    TKSmartCardSlot *_slot;
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    BOOL _sensitive;
    id _session;
    long long _sessionCounter;
    BOOL _someoneWantsSession;
    long long _sessionEndPolicy;
    NSNumber *_reservedProtocols;
    BOOL _useExtendedLength;
    BOOL _useCommandChaining;
    unsigned char _cla;
    BOOL _valid;
    unsigned long long _allowedProtocols;
    unsigned long long _currentProtocol;
    id _context;
}

@property unsigned long long allowedProtocols; // @synthesize allowedProtocols=_allowedProtocols;
@property unsigned char cla;
@property (strong) id context; // @synthesize context=_context;
@property unsigned long long currentProtocol; // @synthesize currentProtocol=_currentProtocol;
@property BOOL sensitive;
@property (nonatomic) long long sessionEndPolicy;
@property (readonly, nonatomic) TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property BOOL useCommandChaining;
@property BOOL useExtendedLength;
@property BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(struct _NSRange)arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(BOOL)arg8 extended:(BOOL *)arg9 realLe:(unsigned long long *)arg10;
- (void)dealloc;
- (BOOL)decodeResponse:(id)arg1 sw:(unsigned short *)arg2 appendTo:(id)arg3 error:(id *)arg4;
- (void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3;
- (void)endSession;
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;
- (void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(BOOL)arg4 error:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)inSessionWithError:(id *)arg1 do:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)releaseSessionWithReply:(CDUnknownBlockType)arg1;
- (id)remoteSessionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reserveExclusive:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)revalidate;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short *)arg6 error:(id *)arg7;
- (void)sessionRequested;
- (void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(BOOL)arg7 isCase4:(BOOL)arg8 reply:(CDUnknownBlockType)arg9;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unreserve;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3;

@end

