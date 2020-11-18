//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSMutableSettings, NSSet, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    BSAnimationSettings *_animationSettings;
    BKSAnimationFenceHandle *_animationFence;
    NSSet *_actions;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

@property (copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property (strong, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property (copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transitionContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalClientSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

