//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFLockScreenActionContext;

@interface CSAction : NSObject
{
    long long _type;
    SBFLockScreenActionContext *_context;
}

@property (strong, nonatomic) SBFLockScreenActionContext *context; // @synthesize context=_context;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)actionWithContext:(id)arg1;
+ (id)actionWithType:(long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
