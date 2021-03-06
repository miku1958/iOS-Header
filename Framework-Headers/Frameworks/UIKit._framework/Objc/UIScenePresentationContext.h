//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class BSMutableSettings, NSDictionary, NSSet, NSString, UIColor, UIMutableTransformer, UITransformer;

@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    BSMutableSettings *_settings;
    UIScenePresentationContext *_defaultPresentationContext;
    UIMutableTransformer *_transformer;
}

@property (readonly, nonatomic) UIScenePresentationContext *_defaultPresentationContext; // @synthesize _defaultPresentationContext;
@property (readonly, copy, nonatomic) NSSet *_exclusiveLayerTargetsToInclude;
@property (readonly, copy, nonatomic) NSSet *_layerTargetsToExclude;
@property (readonly, copy, nonatomic) NSString *_minificationFilterName;
@property (readonly, nonatomic, getter=_isVisibilityPropagationEnabled) BOOL _visibilityPropagationEnabled;
@property (readonly, nonatomic) unsigned long long appearanceStyle;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (readonly, nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) UITransformer *hostTransformer;
@property (readonly, copy, nonatomic) NSDictionary *layerPresentationOverrides;
@property (readonly, nonatomic) unsigned long long presentedLayerTypes;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithDefaultPresentationContext:(id)arg1;
- (id)_initWithDefaultValues;
- (id)_initWithPresentationContext:(id)arg1;
- (id)_initWithSettings:(id)arg1 defaultPresentationContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

