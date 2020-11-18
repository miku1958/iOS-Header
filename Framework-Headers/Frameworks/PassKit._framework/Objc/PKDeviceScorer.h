//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, PKDSPContext;

@interface PKDeviceScorer : NSObject
{
    NSData *_lastDeviceScoreIdentifier;
    NSData *_lastDeviceScore;
    double _deviceScoreTimeout;
    PKDSPContext *_context;
}

@property (readonly, copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
@property (nonatomic) double deviceScoreTimeout; // @synthesize deviceScoreTimeout=_deviceScoreTimeout;

+ (BOOL)deviceScoringSupported;
- (void).cxx_destruct;
- (void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
