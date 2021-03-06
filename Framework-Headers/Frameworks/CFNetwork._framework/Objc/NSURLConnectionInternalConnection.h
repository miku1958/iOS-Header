//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLConnectionInternal.h>

#import <CFNetwork/NSURLConnectionRequired-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>
{
    int _cfConnLock;
    struct _CFURLConnection *_cfConn;
    struct _CFURLAuthChallenge *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString *_fileName;
    BOOL _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_invalidate;
- (void)_resumeLoading;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setShouldSkipCancelOnRelease:(BOOL)arg1;
- (void)_suspendLoading;
- (id)_timingData;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(const struct InternalInit *)arg1;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end

