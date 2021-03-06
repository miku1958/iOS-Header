//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Phoenix/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface backtapInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_model_input;
}

@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *model_input; // @synthesize model_input=_model_input;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithModel_input:(id)arg1;

@end

