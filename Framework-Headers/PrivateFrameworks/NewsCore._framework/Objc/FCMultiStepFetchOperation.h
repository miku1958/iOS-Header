//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCMutexLock, NSMutableArray;

@interface FCMultiStepFetchOperation : FCFetchOperation
{
    NSMutableArray *_steps;
    NSMutableArray *_stepResults;
    FCMutexLock *_accessLock;
}

@property (strong, nonatomic) FCMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property (strong, nonatomic) NSMutableArray *stepResults; // @synthesize stepResults=_stepResults;
@property (strong, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;

- (void).cxx_destruct;
- (void)_performNextStep;
- (void)addFetchStep:(SEL)arg1;
- (void)addNonCriticalFetchStep:(SEL)arg1;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)init;
- (void)performOperation;

@end

