//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CSBeepCancellerDelegate, OS_dispatch_queue;

@interface CSBeepCanceller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> _beepCanceller;
    struct vector<float, std::__1::allocator<float>> _beepFloatVec;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    struct vector<short, std::__1::allocator<short>> _shortBuffer;
    unsigned long long _numTotalInputSamples;
    unsigned long long _numTotalOutputSamples;
    id<CSBeepCancellerDelegate> _delegate;
}

@property (weak, nonatomic) id<CSBeepCancellerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSDictionary *metrics;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)flush;
- (id)init;
- (void)reset;
- (void)willBeep;

@end

