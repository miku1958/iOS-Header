//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray;
@protocol CNObservable, _CNBufferingStrategy;

@interface _CNBufferingObservable : CNObservable
{
    id<_CNBufferingStrategy> _strategy;
    id<CNObservable> _observable;
    NSMutableArray *_results;
}

@property (strong, nonatomic) id<CNObservable> observable; // @synthesize observable=_observable;
@property (strong, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property (strong, nonatomic) id<_CNBufferingStrategy> strategy; // @synthesize strategy=_strategy;

- (void).cxx_destruct;
- (id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3;
- (void)sendBufferedResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;

@end
