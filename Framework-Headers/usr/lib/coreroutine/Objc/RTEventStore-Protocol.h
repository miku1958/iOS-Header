//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSCountedSet, RTEvent;

@protocol RTEventStore <NSObject>
- (void)_processEventsWithGlobalAppLaunchCountedSet:(NSCountedSet *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)addEvent:(RTEvent *)arg1;
- (void)addEvents:(NSArray *)arg1;
- (void)clearAllEvents;
- (unsigned long long)countOfEvents;
- (void)fetchAllPredictionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (double)getConfidence;
- (id)initWithApplicableEventClasses:(NSArray *)arg1;
- (void)invalidate;
- (void)removeEvent:(RTEvent *)arg1;
- (void)removeEvents:(NSArray *)arg1;
- (BOOL)storesEventOfClass:(Class)arg1;
@end
