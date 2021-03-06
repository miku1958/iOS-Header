//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextDecoding-Protocol.h>

@class CRCtcBeamSearch, CRRecognizerConfiguration, CRRegex, CRTextSequenceRecognizerModel, NSString;

@interface CRTextDecoderCTCV1 : NSObject <CRTextDecoding>
{
    CRRecognizerConfiguration *_configuration;
    CRTextSequenceRecognizerModel *_model;
    CRCtcBeamSearch *_beamSearch;
    CRRegex *_regExpressions;
}

@property (strong, nonatomic) CRCtcBeamSearch *beamSearch; // @synthesize beamSearch=_beamSearch;
@property (strong) CRRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) CRTextSequenceRecognizerModel *model; // @synthesize model=_model;
@property (strong, nonatomic) CRRegex *regExpressions; // @synthesize regExpressions=_regExpressions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)correctLMDecodingWithRegex:(id)arg1 noLMDecoding:(id)arg2;
- (void)decodeOutput:(id)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id *)arg3;
- (void)lmDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(struct CGSize)arg3 error:(id *)arg4;
- (void)maxDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 imageSize:(struct CGSize)arg3 error:(id *)arg4;
- (BOOL)shouldDecodeWithLM;

@end

