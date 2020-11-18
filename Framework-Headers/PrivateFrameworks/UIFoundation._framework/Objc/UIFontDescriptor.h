//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property (readonly, nonatomic) struct CGAffineTransform matrix;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) NSString *postscriptName;
@property (readonly, nonatomic) unsigned int symbolicTraits;

+ (id)_createMungledDictionary:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
- (id)_attributes;
- (id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;
- (id)_visibleName;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)fontDescriptorWithFace:(id)arg1;
- (id)fontDescriptorWithFamily:(id)arg1;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform)arg1;
- (id)fontDescriptorWithSize:(double)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontAttributes:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)objectForKey:(id)arg1;

@end

