//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class BSMachPortSendRight, NSArray, NSString, NSUUID, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding>
{
    NSString *_viewControllerClassName;
    NSArray *_serializedAppearanceRepresentations;
    NSUUID *_contextToken;
    NSArray *_displayConfigurations;
    UITraitCollection *_traitCollection;
    BSMachPortSendRight *_hostAccessibilityServerPort;
    long long _availableTextServices;
    long long _initialInterfaceOrientation;
}

@property (nonatomic) long long availableTextServices; // @synthesize availableTextServices=_availableTextServices;
@property (strong, nonatomic) NSUUID *contextToken; // @synthesize contextToken=_contextToken;
@property (copy, nonatomic) NSArray *displayConfigurations; // @synthesize displayConfigurations=_displayConfigurations;
@property (strong, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort; // @synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort;
@property (nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property (copy, nonatomic) NSArray *serializedAppearanceRepresentations; // @synthesize serializedAppearanceRepresentations=_serializedAppearanceRepresentations;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

