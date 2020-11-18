//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsCore/INCExecutionInfo.h>

@class NSString;

@interface INCUserActivityExecutionInfo : INCExecutionInfo
{
    NSString *_userActivityType;
}

@property (readonly, copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3;
- (BOOL)canRunOnLocalDevice;
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;

@end
