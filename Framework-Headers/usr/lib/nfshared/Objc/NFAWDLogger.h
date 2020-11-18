//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;
@protocol NFAWDLoggerDelegate;

@interface NFAWDLogger : NSObject
{
    NSData *_activeAID;
}

@property (copy) NSData *activeAID; // @synthesize activeAID=_activeAID;
@property (weak, nonatomic) id<NFAWDLoggerDelegate> delegate;

+ (id)sharedAWDLogger;
- (void)_updateStats:(id)arg1 reset:(BOOL)arg2;
- (void)dealloc;
- (void)enableQueryMetricsListener;
- (id)generateUUID;
- (unsigned long long)getTimestamp;
- (BOOL)incrementMiddlewareExceptionCountWithReset:(BOOL)arg1;
- (id)init;
- (void)postAWDAPNReceived;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDCardIngestionReaderStateChangeWithType:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)postAWDCardIngestionSessionStateChange:(id)arg1;
- (void)postAWDExpressTransactionEventFor:(unsigned int)arg1 started:(BOOL)arg2;
- (void)postAWDFieldEventWithFieldOn:(BOOL)arg1 withTechnology:(unsigned int)arg2;
- (void)postAWDHCEEndEvent;
- (void)postAWDHCEStartEvent:(id)arg1;
- (void)postAWDHCEStateChangeEvent:(unsigned int)arg1;
- (void)postAWDHCIActivityTimeout:(id)arg1;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIEndOfTransactionV2EventWithParameters:(id)arg1;
- (void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDHCIStartOfTransactionV2EventWithParameters:(id)arg1;
- (void)postAWDMiddlewareException:(unsigned int)arg1 mwVersion:(unsigned int)arg2 errorType:(unsigned int)arg3 errorCode:(unsigned int)arg4 breadcrumb:(unsigned long long)arg5 checkMaxExceptionCounter:(BOOL)arg6;
- (void)postAWDPLLUnlockEvent;
- (void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1;
- (void)postAWDPeerPaymentRequestWithParameters:(id)arg1;
- (void)postAWDReaderModeExceptionForType:(unsigned int)arg1 withErrorCode:(unsigned int)arg2;
- (void)postAWDReaderSessionEventWithParameters:(id)arg1;
- (void)postAWDRestrictedModeFromContactlessMode:(BOOL)arg1 isIcf:(BOOL)arg2;
- (void)postAWDSEMemoryInfo:(id)arg1 isIcf:(BOOL)arg2;
- (void)postAWDSERemovedEvent:(id)arg1 isIcf:(BOOL)arg2;
- (void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(BOOL)arg2;
- (void)postAWDSERestrictedModeExited:(BOOL)arg1;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndOfSession;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDTransactionEndOfOperation;
- (void)postAWDTransactionLastRAPDU;
- (void)postAWDVASGetData:(id)arg1;
- (void)postAWDVASSelectOSE:(id)arg1;
- (void)postAWDVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned int)arg2;
- (void)postAWDVersionInfo:(id)arg1;
- (void)updateStats:(id)arg1 reset:(BOOL)arg2;

@end
