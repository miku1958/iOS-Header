//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScoreBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SCRActivityScheduler : NSObject <BSDescriptionProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activitySchedulerWithTargetQueue:(id)arg1;
+ (id)isolatedActivitySchedulerWithTargetQueue:(id)arg1;
- (void)cancelActivityWithIdentifier:(id)arg1;
- (void)completeActivityWithIdentifier:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithTargetQueue:(id)arg1;
- (void)submitActivity:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

