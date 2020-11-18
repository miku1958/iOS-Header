//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SGStructuredEventCoreMLOutputWrapper : NSObject <MLFeatureProvider>
{
    MLMultiArray *_location;
    MLMultiArray *_time;
    MLMultiArray *_title;
    MLMultiArray *_core;
    MLMultiArray *_bi_lstm_0_h_out;
    MLMultiArray *_bi_lstm_0_c_out;
    MLMultiArray *_bi_lstm_0_h_out_rev;
    MLMultiArray *_bi_lstm_0_c_out_rev;
}

@property (strong, nonatomic) MLMultiArray *bi_lstm_0_c_out; // @synthesize bi_lstm_0_c_out=_bi_lstm_0_c_out;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_c_out_rev; // @synthesize bi_lstm_0_c_out_rev=_bi_lstm_0_c_out_rev;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_h_out; // @synthesize bi_lstm_0_h_out=_bi_lstm_0_h_out;
@property (strong, nonatomic) MLMultiArray *bi_lstm_0_h_out_rev; // @synthesize bi_lstm_0_h_out_rev=_bi_lstm_0_h_out_rev;
@property (strong, nonatomic) MLMultiArray *core; // @synthesize core=_core;
@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *location; // @synthesize location=_location;
@property (strong, nonatomic) MLMultiArray *time; // @synthesize time=_time;
@property (strong, nonatomic) MLMultiArray *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithLocation:(id)arg1 time:(id)arg2 title:(id)arg3 core:(id)arg4 bi_lstm_0_h_out:(id)arg5 bi_lstm_0_c_out:(id)arg6 bi_lstm_0_h_out_rev:(id)arg7 bi_lstm_0_c_out_rev:(id)arg8;

@end
