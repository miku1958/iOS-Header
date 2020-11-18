//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNForkJoinResultReportingStrategy-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy>
{
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3;

@end

