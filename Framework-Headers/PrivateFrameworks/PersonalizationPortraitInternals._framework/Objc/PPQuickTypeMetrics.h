//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2;
+ (void)eventsMatches:(unsigned long long)arg1;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;
+ (id)instance;
- (void).cxx_destruct;
- (id)init;

@end
