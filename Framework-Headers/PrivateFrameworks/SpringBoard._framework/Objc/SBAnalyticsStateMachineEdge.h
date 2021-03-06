//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding>
{
    unsigned long long _fromState;
    CDUnknownBlockType _transition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long fromState; // @synthesize fromState=_fromState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(CDUnknownBlockType)arg4;
+ (id)edgeFromState:(unsigned long long)arg1 transition:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithFromState:(unsigned long long)arg1 transition:(CDUnknownBlockType)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

