//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/VSSpeechServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSString, VSPresynthesizedAudioRequest, VSSpeechConnection, VSSpeechRequest;
@protocol VSSpeechConnectionDelegate;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>
{
    id<VSSpeechConnectionDelegate> _delegate;
    VSSpeechRequest *_request;
    NSMutableDictionary *_concurrentSynthesisRequests;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    VSSpeechConnection *_connection;
}

@property (strong, nonatomic) NSMutableDictionary *concurrentSynthesisRequests; // @synthesize concurrentSynthesisRequests=_concurrentSynthesisRequests;
@property (weak, nonatomic) VSSpeechConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest; // @synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest;
@property (strong, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;

@end

