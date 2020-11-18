//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIContentViewConfiguration-Protocol.h>

@class NSString, _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration;

@interface _UIBasicCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins:1;
        unsigned int hasCustomizedDirectionalLayoutMargins:1;
        unsigned int hasCustomizedImageToTextPadding:1;
    } _configurationFlags;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    double _imageToTextPadding;
    _UIContentViewEditingConfiguration *_textLabelEditingConfiguration;
    long long _defaultStyle;
    _UIContentViewImageViewConfiguration *_imageView;
    _UIContentViewLabelConfiguration *_textLabel;
    struct NSDirectionalEdgeInsets _directionalLayoutMargins;
}

@property (copy, nonatomic) _UIContentViewEditingConfiguration *_textLabelEditingConfiguration; // @synthesize _textLabelEditingConfiguration;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageToTextPadding;
@property (readonly, nonatomic) _UIContentViewImageViewConfiguration *imageView; // @synthesize imageView=_imageView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // @synthesize textLabel=_textLabel;

+ (id)defaultConfiguration;
+ (id)defaultListCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1;
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1;
+ (id)listCellConfiguration;
+ (id)outlineCellConfiguration;
+ (id)outlineRootParentCellConfiguration;
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

