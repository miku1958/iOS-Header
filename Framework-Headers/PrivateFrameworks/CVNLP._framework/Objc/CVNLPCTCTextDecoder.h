//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVNLP/CVNLPTextDecoder.h>

#import <CVNLP/CVNLPTextDecoding-Protocol.h>

@class CVNLPActivationMatrix, NSString;

@interface CVNLPCTCTextDecoder : CVNLPTextDecoder <CVNLPTextDecoding>
{
    CVNLPActivationMatrix *_activationMatrix;
}

@property (strong, nonatomic) CVNLPActivationMatrix *activationMatrix; // @synthesize activationMatrix=_activationMatrix;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3 optimizeAlignment:(BOOL)arg4;
- (id)decodingResultWithConfiguration:(id)arg1 withContext:(id)arg2;
- (id)greedyDecodingResult;
- (id)greedyDecodingResultWithConfiguration:(id)arg1;
- (id)initWithLanguageResourceBundle:(id)arg1;

@end
