//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>
#import <FrontBoard/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary, NSURL;
@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>
{
    NSArray *_arguments;
    NSDictionary *_environment;
    NSURL *_standardOutputURL;
    NSURL *_standardErrorURL;
    BOOL _waitForDebugger;
    BOOL _disableASLR;
    BOOL _checkForLeaks;
    long long _launchIntent;
    unsigned int _launchAssertionFlags;
    id<FBProcessWatchdogProviding> _watchdogProvider;
    double _watchdogExtension;
    double _watchdogScaleFactor;
}

@property (copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property (nonatomic) BOOL checkForLeaks; // @synthesize checkForLeaks=_checkForLeaks;
@property (nonatomic) BOOL disableASLR; // @synthesize disableASLR=_disableASLR;
@property (copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property (nonatomic) unsigned int launchAssertionFlags; // @synthesize launchAssertionFlags=_launchAssertionFlags;
@property (nonatomic) long long launchIntent; // @synthesize launchIntent=_launchIntent;
@property (strong, nonatomic) NSURL *standardErrorURL; // @synthesize standardErrorURL=_standardErrorURL;
@property (strong, nonatomic) NSURL *standardOutputURL; // @synthesize standardOutputURL=_standardOutputURL;
@property (nonatomic) BOOL waitForDebugger; // @synthesize waitForDebugger=_waitForDebugger;
@property (nonatomic) double watchdogExtension; // @synthesize watchdogExtension=_watchdogExtension;
@property (strong, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider; // @synthesize watchdogProvider=_watchdogProvider;
@property (nonatomic) double watchdogScaleFactor; // @synthesize watchdogScaleFactor=_watchdogScaleFactor;

- (id)_initWithExecutionContext:(id)arg1;
- (unsigned int)_launchAssertionFlags;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

