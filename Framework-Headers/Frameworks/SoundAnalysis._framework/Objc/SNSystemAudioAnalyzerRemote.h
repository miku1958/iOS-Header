//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNSystemAudioAnalyzerProtocol-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, SNSystemAudioAnalyzerProtocol;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol>
{
    NSMutableDictionary *_registeredRequests;
    id<SNSystemAudioAnalyzerProtocol> _analyzer;
    CDUnknownBlockType _generator;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)connectionLostError;
- (void).cxx_destruct;
- (id)_acquireSystemAudioAnalyzer;
- (void)_addRequest:(id)arg1 withObserver:(id)arg2;
- (void)_invalidateActiveAnalyzer;
- (void)_invalidateAnalyzer:(id)arg1;
- (void)_removeAllRequests;
- (void)_removeRequest:(id)arg1;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (id)initWithRemoteAnalyzerGenerator:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)invalidateActiveAnalyzer;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)start;
- (void)stop;

@end

