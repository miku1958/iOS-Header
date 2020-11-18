//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

@class NSMutableSet;

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter
{
    NSMutableSet *_pidOfAppsRunningInBackground;
}

@property (strong, nonatomic) NSMutableSet *pidOfAppsRunningInBackground; // @synthesize pidOfAppsRunningInBackground=_pidOfAppsRunningInBackground;

+ (BOOL)isWhitelistedMessage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (id)initWithName:(id)arg1;
- (void)updateAppWithPid:(int)arg1 runningInBackground:(BOOL)arg2;

@end
