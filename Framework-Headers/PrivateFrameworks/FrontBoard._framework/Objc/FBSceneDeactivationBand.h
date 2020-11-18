//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class NSHashTable, NSString;

@interface FBSceneDeactivationBand : NSObject <BSDescriptionProviding>
{
    double _level;
    NSHashTable *_assertions;
}

@property (readonly, nonatomic) unsigned long long assertionCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double level; // @synthesize level=_level;
@property (readonly) Class superclass;

+ (id)bandWithSceneLevel:(double)arg1;
- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (unsigned long long)deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithSceneLevel:(double)arg1;
- (void)removeAssertion:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

