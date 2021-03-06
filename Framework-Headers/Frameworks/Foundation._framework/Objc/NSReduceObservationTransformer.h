//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer
{
    CDUnknownBlockType _reducer;
    id _accumulator;
}

+ (id)reduceValue:(id)arg1 withReducer:(CDUnknownBlockType)arg2;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (void)finishObserving;
- (id)initWithBlock:(CDUnknownBlockType)arg1 initialValue:(id)arg2;

@end

