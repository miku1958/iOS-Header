//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCRebootstrapNotifier : NSObject
{
    int _token;
    unsigned long long _rebootstrapCounterSnapshot;
}

@property (nonatomic) unsigned long long rebootstrapCounterSnapshot; // @synthesize rebootstrapCounterSnapshot=_rebootstrapCounterSnapshot;
@property (readonly, nonatomic) int token; // @synthesize token=_token;

+ (id)sharedNotifier;
- (id)_initSingleton;
- (void)dealloc;
- (void)postLocalNotification;
- (void)postLocalNotificationIfNeeded;

@end

