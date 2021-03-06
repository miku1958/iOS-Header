//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject
{
    NSString *accessibilityConfigurationHint;
    NSString *accessibilityConfigurationIdentifier;
    NSString *accessibilityConfigurationLabel;
    NSNumber *accessibilityConfigurationTraits;
    NSNumber *isAccessibilityConfigurationElement;
    NSObject *object;
}

@property (strong, nonatomic) NSString *accessibilityConfigurationHint; // @synthesize accessibilityConfigurationHint;
@property (strong, nonatomic) NSString *accessibilityConfigurationIdentifier; // @synthesize accessibilityConfigurationIdentifier;
@property (strong, nonatomic) NSString *accessibilityConfigurationLabel; // @synthesize accessibilityConfigurationLabel;
@property (strong, nonatomic) NSNumber *accessibilityConfigurationTraits; // @synthesize accessibilityConfigurationTraits;
@property (strong, nonatomic) NSNumber *isAccessibilityConfigurationElement; // @synthesize isAccessibilityConfigurationElement;
@property (strong, nonatomic) NSObject *object; // @synthesize object;

- (void).cxx_destruct;
- (void)applyConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;
- (id)initWithObject:(id)arg1 label:(id)arg2 identifier:(id)arg3 hint:(id)arg4 traits:(id)arg5 andIsAccessibilityElement:(id)arg6;

@end

