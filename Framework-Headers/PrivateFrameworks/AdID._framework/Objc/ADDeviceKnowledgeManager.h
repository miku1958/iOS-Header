//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/BackgroundTaskDelegate-Protocol.h>

@class ADBackgroundTaskRequest, NSNumber, NSString;

@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate>
{
    BOOL _taskIsRunning;
    ADBackgroundTaskRequest *_xpc_task;
    NSNumber *_refreshInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property (readonly) Class superclass;
@property (nonatomic) BOOL taskIsRunning; // @synthesize taskIsRunning=_taskIsRunning;
@property (strong, nonatomic) ADBackgroundTaskRequest *xpc_task; // @synthesize xpc_task=_xpc_task;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (id)init;
- (void)processDeviceData:(CDUnknownBlockType)arg1;
- (BOOL)runTask:(id)arg1;
- (void)scheduleDeviceDataProcessing:(double)arg1;

@end
