//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCReaderSession.h>

#import <CoreNFC/NFReaderSessionCallbacks-Protocol.h>

@class NSString;

@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks>
{
    BOOL _invalidateAfterFirstRead;
    unsigned long long _tagsRead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)readingAvailable;
- (void)_callbackDidBecomeActive;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(CDUnknownBlockType)arg3;
- (void)didTerminate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 invalidateAfterFirstRead:(BOOL)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;
- (void)restartPolling;

@end

