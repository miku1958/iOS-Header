//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIScreenBasedWindowScene.h>

#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPlaceholderWindowScene : _UIScreenBasedWindowScene <_UIContextBinderContextCreationPolicyHolding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)alwaysKeepContexts;
+ (BOOL)autoinvalidates;
+ (BOOL)shouldAllowComponents;
- (BOOL)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;

@end

