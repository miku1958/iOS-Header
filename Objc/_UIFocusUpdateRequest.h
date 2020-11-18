//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIFocusUpdateRequesting-Protocol.h>

@class NSString, UIFocusAnimationCoordinator, UIFocusSystem, _UIFocusInputDeviceInfo;
@protocol UIFocusEnvironment;

@interface _UIFocusUpdateRequest : NSObject <_UIFocusUpdateRequesting, NSCopying>
{
    BOOL _allowsDeferral;
    BOOL _isFocusRemovalRequest;
    BOOL _shouldPlayFocusSound;
    BOOL _allowsFocusingCurrentItem;
    BOOL _allowsFocusRestoration;
    UIFocusAnimationCoordinator *_animationCoordinator;
    UIFocusSystem *_focusSystem;
    id<UIFocusEnvironment> _environment;
}

@property (nonatomic) BOOL allowsDeferral; // @synthesize allowsDeferral=_allowsDeferral;
@property (nonatomic) BOOL allowsFocusRestoration; // @synthesize allowsFocusRestoration=_allowsFocusRestoration;
@property (nonatomic) BOOL allowsFocusingCurrentItem; // @synthesize allowsFocusingCurrentItem=_allowsFocusingCurrentItem;
@property (strong, nonatomic) UIFocusAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> environment; // @synthesize environment=_environment;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) BOOL isFocusRemovalRequest; // @synthesize isFocusRemovalRequest=_isFocusRemovalRequest;
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (nonatomic) BOOL shouldPlayFocusSound; // @synthesize shouldPlayFocusSound=_shouldPlayFocusSound;
@property (readonly) Class superclass;

+ (id)requestForRemovingFocusInFocusSystem:(id)arg1;
- (void).cxx_destruct;
- (void)cacheCurrentFocusSystem;
- (BOOL)canMergeWithRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 environment:(id)arg2;
- (BOOL)isValidInFocusSystem:(id)arg1;
- (id)requestByMergingWithRequest:(id)arg1;
- (id)requestByRedirectingRequestToEnvironment:(id)arg1;

@end

