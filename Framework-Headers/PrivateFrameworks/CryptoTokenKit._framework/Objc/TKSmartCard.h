//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, TKSmartCardSlot;
@protocol OS_dispatch_queue;

@interface TKSmartCard : NSObject
{
    TKSmartCardSlot *_slot;
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    BOOL _sensitive;
    BOOL _sensitiveRequired;
    BOOL _synchronous;
    id _session;
    long long _sessionCounter;
    BOOL _someoneWantsSession;
    long long _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    BOOL _useExtendedLength;
    BOOL _useCommandChaining;
    unsigned char _cla;
    BOOL _valid;
    unsigned long long _allowedProtocols;
    unsigned long long _currentProtocol;
}

@property unsigned long long allowedProtocols; // @synthesize allowedProtocols=_allowedProtocols;
@property (strong) id context;
@property unsigned long long currentProtocol; // @synthesize currentProtocol=_currentProtocol;
@property BOOL sensitive;
@property (readonly, nonatomic) TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property BOOL valid; // @synthesize valid=_valid;

+ (id)_localizedString:(id)arg1;
+ (BOOL)decodeResponse:(id)arg1 sw:(unsigned short *)arg2 appendTo:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (BOOL)beginSessionWithError:(id *)arg1;
- (void)beginSessionWithReply:(CDUnknownBlockType)arg1;
- (id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(struct _NSRange)arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(BOOL)arg8 extended:(BOOL *)arg9 realLe:(unsigned long long *)arg10;
- (BOOL)checkAPDUResponse:(id)arg1 error:(id *)arg2;
- (unsigned char)cla;
- (id)contextForKey:(id)arg1;
- (void)dealloc;
- (void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3;
- (void)endSession;
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;
- (void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(BOOL)arg4 error:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (BOOL)inSessionWithError:(id *)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)querySessionWithReply:(CDUnknownBlockType)arg1;
- (void)releaseSessionWithReply:(CDUnknownBlockType)arg1;
- (id)remoteSessionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reserveExclusive:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)revalidate;
- (BOOL)selectApplication:(id)arg1 error:(id *)arg2;
- (void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short *)arg6 error:(id *)arg7;
- (long long)sessionEndPolicy;
- (void)sessionRequested;
- (void)setCla:(unsigned char)arg1;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)setSynchronous:(BOOL)arg1;
- (void)setUseCommandChaining:(BOOL)arg1;
- (void)setUseExtendedLength:(BOOL)arg1;
- (BOOL)synchronous;
- (void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(BOOL)arg7 isCase4:(BOOL)arg8 reply:(CDUnknownBlockType)arg9;
- (void)transmitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unreserve;
- (BOOL)useCommandChaining;
- (BOOL)useExtendedLength;
- (id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4;
- (id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3;

@end

