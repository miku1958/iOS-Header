//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBIdleTimerRequestConfiguration;

@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding>
{
    SBIdleTimerRequestConfiguration *_configuration;
    NSString *_reason;
}

@property (readonly, nonatomic) SBIdleTimerRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1 reason:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
