//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kDistressedBabyModelOutput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_Sigmoid;
}

@property (strong, nonatomic) MLMultiArray *Sigmoid; // @synthesize Sigmoid=_Sigmoid;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithSigmoid:(id)arg1;

@end

