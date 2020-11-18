//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL;
@protocol FBProcessWatchdogProviding;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext
{
}

@property (copy, nonatomic) NSArray *arguments; // @dynamic arguments;
@property (nonatomic) BOOL checkForLeaks; // @dynamic checkForLeaks;
@property (nonatomic) BOOL disableASLR; // @dynamic disableASLR;
@property (copy, nonatomic) NSDictionary *environment; // @dynamic environment;
@property (nonatomic) long long launchIntent; // @dynamic launchIntent;
@property (strong, nonatomic) NSURL *standardErrorURL; // @dynamic standardErrorURL;
@property (strong, nonatomic) NSURL *standardOutputURL; // @dynamic standardOutputURL;
@property (nonatomic) BOOL waitForDebugger; // @dynamic waitForDebugger;
@property (nonatomic) double watchdogExtension; // @dynamic watchdogExtension;
@property (strong, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider; // @dynamic watchdogProvider;
@property (nonatomic) double watchdogScaleFactor; // @dynamic watchdogScaleFactor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

