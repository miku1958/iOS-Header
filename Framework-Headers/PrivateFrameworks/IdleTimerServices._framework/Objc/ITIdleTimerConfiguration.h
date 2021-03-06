//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/BSDescriptionProviding-Protocol.h>
#import <IdleTimerServices/BSXPCSecureCoding-Protocol.h>
#import <IdleTimerServices/NSCopying-Protocol.h>

@class NSString;

@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding>
{
    BOOL _disablesTimer;
    NSString *_identifier;
    unsigned long long _idleEventMask;
    CDUnknownBlockType _idleEventHandlerBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesTimer; // @synthesize disablesTimer=_disablesTimer;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic, getter=_identifier) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic, getter=_idleEventHandlerBlock, setter=_setIdleEventHandlerBlock:) CDUnknownBlockType idleEventHandlerBlock; // @synthesize idleEventHandlerBlock=_idleEventHandlerBlock;
@property (nonatomic, getter=_idleEventMask, setter=_setIdleEventMask:) unsigned long long idleEventMask; // @synthesize idleEventMask=_idleEventMask;
@property (readonly) Class superclass;

+ (id)configurationToDisableIdleTimer;
+ (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
- (id)_copyWithNewIdentifier;
- (id)_uniquedReason:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

