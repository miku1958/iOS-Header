//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIContentViewConfiguration-Protocol.h>

@class NSString, _UIContentViewLabelConfiguration;

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins:1;
        unsigned int hasCustomizedDirectionalLayoutMargins:1;
    } _configurationFlags;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    long long _defaultStyle;
    _UIContentViewLabelConfiguration *_textLabel;
    struct NSDirectionalEdgeInsets _directionalLayoutMargins;
}

@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL resetsVerticalLayoutMargins;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // @synthesize textLabel=_textLabel;

+ (id)defaultFooterConfiguration;
+ (id)defaultGroupedFooterConfiguration;
+ (id)defaultGroupedHeaderConfiguration;
+ (id)defaultHeaderConfiguration;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToContentView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createContentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;

@end

