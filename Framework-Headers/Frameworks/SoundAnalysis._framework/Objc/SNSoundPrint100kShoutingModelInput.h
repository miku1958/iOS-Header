//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kShoutingModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_soundprint_Placeholder;
}

@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *soundprint_Placeholder; // @synthesize soundprint_Placeholder=_soundprint_Placeholder;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithSoundprint_Placeholder:(id)arg1;

@end
