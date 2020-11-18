//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKStandingQuery-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery>
{
    NSString *queryIdentifier;
    NSObject<OS_xpc_object> *activity;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity;
@property (strong, nonatomic) NSString *queryIdentifier; // @synthesize queryIdentifier;

- (void).cxx_destruct;
- (long long)_computeSlotForDate:(id)arg1;
- (id)_customIdentifierForDayOfWeek:(long long)arg1;
- (double)_deviceActivityEphemerality;
- (id)_predicateForDeletedEventsWithReferenceDate:(id)arg1;
- (BOOL)_shouldDefer;
- (void)executeWithStorage:(id)arg1;
- (void)executeWithStorage:(id)arg1 referenceDate:(id)arg2;
- (id)fetchResult;
- (id)fetchResultForDayOfWeek:(long long)arg1;
- (id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2;
- (id)fetchResultFromStorage:(id)arg1;
- (id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2;
- (id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3;
- (id)init;

@end
