//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFontDescriptor;

@interface _UIFontPickerFontInfo : NSObject
{
    NSString *_familyName;
    NSString *_styleName;
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
    NSString *_postscriptName;
}

@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;
@property (readonly) NSString *familyName; // @synthesize familyName=_familyName;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly) BOOL hasMultipleFaces;
@property (readonly) double lineHeight;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *postscriptName; // @synthesize postscriptName=_postscriptName;
@property (readonly) NSString *styleName; // @synthesize styleName=_styleName;

+ (id)infoWithFamilyName:(id)arg1;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor *)arg1;
- (void).cxx_destruct;
- (id)_fontStringForTraitCollection:(id)arg1;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_sortedFacesByWeight;
- (void)_updateAttributedStringIfNeeded;
- (id)description;
- (id)faceMatchingDescriptor:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFamilyName:(id)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesConfiguration:(id)arg1;
- (BOOL)matchesFamilyForFontDescriptor:(id)arg1;
- (BOOL)matchesFontDescriptor:(id)arg1;
- (BOOL)matchesLanguages:(id)arg1;
- (BOOL)matchesTraits:(unsigned int)arg1;

@end

