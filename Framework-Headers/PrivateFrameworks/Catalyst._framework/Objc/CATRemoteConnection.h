//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATHTTPMessageParserDelegate-Protocol.h>
#import <Catalyst/NSStreamDelegate-Protocol.h>

@class CATHTTPMessageParser, CATRemoteConnectionSocketOptions, CATSerialOperationQueue, NSArray, NSError, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;
@protocol CATRemoteConnectionDelegate, OS_dispatch_source;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate>
{
    CATHTTPMessageParser *mMessageParser;
    long long mState;
    NSMutableArray *mPendingSendContexts;
    NSObject<OS_dispatch_source> *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    NSMutableData *mReadBuffer;
    NSArray *mTrustedCertificates;
    long long mPeerTrustState;
    CATSerialOperationQueue *mStreamEventQueue;
    BOOL _usesSSL;
    id<CATRemoteConnectionDelegate> _delegate;
    NSString *_name;
    double _connectionTimeoutInterval;
    CATRemoteConnectionSocketOptions *_socketOptions;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _bufferSize;
}

@property (nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property (nonatomic) double connectionTimeoutInterval; // @synthesize connectionTimeoutInterval=_connectionTimeoutInterval;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CATRemoteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (readonly, nonatomic) struct __SecTrust *peerTrust;
@property (copy, nonatomic) CATRemoteConnectionSocketOptions *socketOptions; // @synthesize socketOptions=_socketOptions;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSSL; // @synthesize usesSSL=_usesSSL;

+ (void)createConnectionPairWithConnection:(id *)arg1 andConnection:(id *)arg2;
+ (void)createConnectionPairWithConnection:(id *)arg1 andConnection:(id *)arg2 bufferSize:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (void)configureStreamSocketOptions;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionDidReceiveData;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (void)dealloc;
- (void)delegateDidClose;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidOpen;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidReceiveDataRequestWithURL:(id)arg1;
- (void)delegateDidReceiveStreamData:(id)arg1 moreComing:(BOOL)arg2;
- (void)delegateDidSecure;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidWriteDataForContextIfNeeded:(id)arg1;
- (void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)delegateWillSecure;
- (void)enqueueSendContext:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithNetService:(id)arg1;
- (void)messageParser:(id)arg1 didParseRequestData:(id)arg2;
- (void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2;
- (void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(BOOL)arg3;
- (void)open;
- (void)scheduleStreams;
- (void)secureUsingClientIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2;
- (BOOL)secureUsingIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3;
- (void)secureUsingServerIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
- (void)sendDataWithStream:(id)arg1 length:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)sendDidFail:(id)arg1 withError:(id)arg2;
- (void)sendDidSucceed:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)arg1;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
- (BOOL)trySendingDataWithContext:(id)arg1 error:(id *)arg2;
- (void)unscheduleStreams;

@end

