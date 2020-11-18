//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/NSCopying-Protocol.h>
#import <RunningBoard/NSMutableCopying-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSMutableSet *_tags;
    BOOL _preventLaunch;
    BOOL _preventIdleSleep;
    NSMutableSet *_preventIdleSleepIdentifiers;
    BOOL _throttleBestEffortNetworking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL preventIdleSleep; // @synthesize preventIdleSleep=_preventIdleSleep;
@property (readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // @synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers;
@property (readonly, nonatomic) BOOL preventLaunch; // @synthesize preventLaunch=_preventLaunch;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property (readonly, nonatomic) BOOL throttleBestEffortNetworking; // @synthesize throttleBestEffortNetworking=_throttleBestEffortNetworking;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
