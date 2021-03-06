//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider>
{
    MLMultiArray *_L;
    MLMultiArray *_D;
    MLMultiArray *_I;
    MLMultiArray *_N;
    MLMultiArray *_W;
    MLMultiArray *_bi_lstm_0_h_in;
    MLMultiArray *_bi_lstm_0_c_in;
    MLMultiArray *_bi_lstm_0_h_in_rev;
    MLMultiArray *_bi_lstm_0_c_in_rev;
}

@property (strong, nonatomic) MLMultiArray *D; // @synthesize D=_D;
@property (strong, nonatomic) MLMultiArray *I; // @synthesize I=_I;
@property (strong, nonatomic) MLMultiArray *L; // @synthesize L=_L;
@property (strong, nonatomic) MLMultiArray *N; // @synthesize N=_N;
@property (strong, nonatomic) MLMultiArray *W; // @synthesize W=_W;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_c_in; // @synthesize bi_lstm_0_c_in=_bi_lstm_0_c_in;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_c_in_rev; // @synthesize bi_lstm_0_c_in_rev=_bi_lstm_0_c_in_rev;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_h_in; // @synthesize bi_lstm_0_h_in=_bi_lstm_0_h_in;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_h_in_rev; // @synthesize bi_lstm_0_h_in_rev=_bi_lstm_0_h_in_rev;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5 bi_lstm_0_h_in:(id)arg6 bi_lstm_0_c_in:(id)arg7 bi_lstm_0_h_in_rev:(id)arg8 bi_lstm_0_c_in_rev:(id)arg9;

@end

