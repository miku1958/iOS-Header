//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@interface WFTrigger (CoreDuetContext)
+ (id)powerLogEventKindForTrigger:(id)arg1;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (BOOL)contextStoreRegistrationIsForWatch;
- (BOOL)requiresEventInfoAsInput;
- (BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id *)arg2;
@end

