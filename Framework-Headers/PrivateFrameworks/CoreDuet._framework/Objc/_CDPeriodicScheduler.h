//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPeriodicScheduler-Protocol.h>

@class NSString;

@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)registerJob:(id)arg1;
- (void)unregisterJob:(id)arg1;
- (void)updateExecutionCriteriaOnJob:(id)arg1;

@end

