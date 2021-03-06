//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncManagerPipelineTask.h>

@class NSMutableString, NSString;

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask
{
    struct os_unfair_lock_s _lock;
    NSMutableString *_accumulatedDescription;
    NSString *_cloudDescription;
}

@property (copy) NSString *cloudDescription; // @synthesize cloudDescription=_cloudDescription;

- (void).cxx_destruct;
- (void)didFailWithErrors:(id)arg1;
- (void)didFinishWithSuccess;
- (id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)pipelineForRepository:(id)arg1;

@end

