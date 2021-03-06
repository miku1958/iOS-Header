//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLayoutState.h>

@class NSSet, NSString;

@interface SBMainDisplayLayoutState : SBLayoutState
{
    BOOL _floatingSwitcherVisible;
    long long _spaceConfiguration;
    long long _floatingConfiguration;
    long long _unlockedEnvironmentMode;
    NSString *_bundleIDShowingAppExpose;
    NSSet *_inlineAppExposeOverlayElements;
}

@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose; // @synthesize bundleIDShowingAppExpose=_bundleIDShowingAppExpose;
@property (readonly, nonatomic) long long floatingConfiguration; // @synthesize floatingConfiguration=_floatingConfiguration;
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible; // @synthesize floatingSwitcherVisible=_floatingSwitcherVisible;
@property (readonly, nonatomic) NSSet *inlineAppExposeOverlayElements; // @synthesize inlineAppExposeOverlayElements=_inlineAppExposeOverlayElements;
@property (readonly, nonatomic) long long spaceConfiguration; // @synthesize spaceConfiguration=_spaceConfiguration;
@property (readonly, nonatomic) long long unlockedEnvironmentMode; // @synthesize unlockedEnvironmentMode=_unlockedEnvironmentMode;

+ (long long)_defaultInterfaceOrientation;
- (void).cxx_destruct;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 unlockedEnvironmentMode:(long long)arg6 floatingSwitcherVisible:(BOOL)arg7 bundleIDShowingAppExpose:(id)arg8 inlineAppExposeOverlayElements:(id)arg9;
- (id)_transitionContextForDismissingLeftApplication;
- (id)_transitionContextForDismissingRightApplication;
- (id)_transitionContextForResizingToSpaceConfiguration:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)floatingItem;
- (unsigned long long)hash;
- (id)inlineAppExposeOverlayElementWithRole:(long long)arg1;
- (long long)interfaceOrientation;
- (BOOL)isEqual:(id)arg1;
- (id)visibleFloatingItem;

@end

