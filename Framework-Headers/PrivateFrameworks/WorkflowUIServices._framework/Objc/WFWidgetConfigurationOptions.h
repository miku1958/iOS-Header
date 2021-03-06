//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INIntent, NSString;

@interface WFWidgetConfigurationOptions : NSObject
{
    INIntent *_intent;
    NSString *_widgetExtensionBundleIdentifier;
    unsigned long long _sizeClass;
    NSString *_widgetDisplayName;
    NSString *_widgetDescription;
    struct CGRect _initialConfigurationCardViewFrame;
}

@property (nonatomic) struct CGRect initialConfigurationCardViewFrame; // @synthesize initialConfigurationCardViewFrame=_initialConfigurationCardViewFrame;
@property (strong, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property (copy, nonatomic) NSString *widgetDescription; // @synthesize widgetDescription=_widgetDescription;
@property (copy, nonatomic) NSString *widgetDisplayName; // @synthesize widgetDisplayName=_widgetDisplayName;
@property (strong, nonatomic) NSString *widgetExtensionBundleIdentifier; // @synthesize widgetExtensionBundleIdentifier=_widgetExtensionBundleIdentifier;

- (void).cxx_destruct;
- (id)init;

@end

