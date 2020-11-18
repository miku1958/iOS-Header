//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSAppearanceProviding-Protocol.h>
#import <CoverSheet/NSCopying-Protocol.h>

@class NSMutableSet, NSSet, NSString, UIColor, _UILegibilitySettings;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>
{
    NSMutableSet *_components;
    BOOL _transitional;
    NSString *_identifier;
    long long _backgroundStyle;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_backgroundColor;
}

@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (copy, nonatomic) NSSet *components; // @synthesize components=_components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitional) BOOL transitional; // @synthesize transitional=_transitional;

+ (id)appearanceForProvider:(id)arg1;
+ (id)appearanceWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)componentForType:(long long)arg1 identifier:(id)arg2;
- (id)componentForType:(long long)arg1 property:(unsigned long long)arg2;
- (void)conformsToCSAppearanceProviding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForComponentType:(long long)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAppearance:(id)arg1;
- (void)removeAllComponentsWithIdentifier:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)reset;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unionAppearance:(id)arg1;

@end
