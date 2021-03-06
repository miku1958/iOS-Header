//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXResponse, NSArray, NSError;

@interface ATXAppDirectoryResponse : NSObject
{
    NSError *_error;
    NSArray *_predictedApps;
    NSArray *_recentApps;
    ATXResponse *_response;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSArray *predictedApps; // @synthesize predictedApps=_predictedApps;
@property (readonly, nonatomic) NSArray *recentApps; // @synthesize recentApps=_recentApps;
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) ATXResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 recentApps:(id)arg2 otherAppsOnScreen:(id)arg3 numAppsToPredict:(unsigned long long)arg4 error:(id)arg5;
- (id)initWithoutDedupingForRecents:(id)arg1 predictedApps:(id)arg2 error:(id)arg3;

@end

