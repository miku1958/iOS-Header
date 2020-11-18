//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UIImageConfiguration-Protocol.h>

@class NSString, UITraitCollection;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding>
{
    BOOL _ignoresDynamicType;
    UITraitCollection *_traitCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

+ (id)_completeConfiguration:(id)arg1 fromConfiguration:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (id)_configurationIgnoringDynamicType;
- (id)_init;
- (id)_initWithTraitCollection:(id)arg1;
- (BOOL)_isUnspecified;
- (BOOL)_shouldApplyConfiguration:(id)arg1;
- (id)configurationByApplyingConfiguration:(id)arg1;
- (id)configurationWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToConfiguration:(id)arg1;

@end

