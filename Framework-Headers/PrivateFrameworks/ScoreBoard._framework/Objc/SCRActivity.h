//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScoreBoard/BSDescriptionProviding-Protocol.h>
#import <ScoreBoard/NSCopying-Protocol.h>
#import <ScoreBoard/SCRSchedulable-Protocol.h>

@class NSString, SCRSchedulingConfiguration;

@interface SCRActivity : NSObject <NSCopying, BSDescriptionProviding, SCRSchedulable>
{
    SCRSchedulingConfiguration *_schedulingConfiguration;
    NSString *_identifier;
    NSString *_name;
    CDUnknownBlockType _activationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType activationBlock; // @synthesize activationBlock=_activationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy) SCRSchedulingConfiguration *schedulingConfiguration; // @synthesize schedulingConfiguration=_schedulingConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 earliestStartDate:(id)arg2 schedulingWindow:(double)arg3 activationBlock:(CDUnknownBlockType)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
