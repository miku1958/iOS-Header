//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UISApplicationStateClient;

@interface UISApplicationState : NSObject
{
    NSString *_bundleIdentifier;
    UISApplicationStateClient *_client;
}

@property (nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
@property (nonatomic, setter=_setUsesBackgroundNetwork:) BOOL _usesBackgroundNetwork;
@property (copy, nonatomic) id badgeValue;

- (void).cxx_destruct;
- (void)_setMinimumBackgroundFetchInterval:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initForCurrentApplication;
- (id)initWithBundleIdentifier:(id)arg1;

@end
