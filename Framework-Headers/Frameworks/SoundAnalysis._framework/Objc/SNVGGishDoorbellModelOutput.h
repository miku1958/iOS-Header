//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishDoorbellModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input_1;
    MLMultiArray *_Confidence;
    MLMultiArray *_Detected;
    MLMultiArray *_detectedHistoryOut;
}

@property (strong, nonatomic) MLMultiArray *Confidence; // @synthesize Confidence=_Confidence;
@property (strong, nonatomic) MLMultiArray *Detected; // @synthesize Detected=_Detected;
@property (strong, nonatomic) MLMultiArray *detectedHistoryOut; // @synthesize detectedHistoryOut=_detectedHistoryOut;
@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *input_1; // @synthesize input_1=_input_1;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 detectedHistoryOut:(id)arg4;

@end

