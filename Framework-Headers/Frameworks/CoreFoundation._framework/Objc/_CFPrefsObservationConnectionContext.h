//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPrefsObservationConnectionContext : NSObject
{
    struct os_unfair_lock_s _lock;
    long long _identifier;
    struct __CFArray *_observedSources;
}

@end

