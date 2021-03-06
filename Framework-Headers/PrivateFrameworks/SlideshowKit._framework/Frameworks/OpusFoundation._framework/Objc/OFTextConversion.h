//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OFTextConversion : NSObject
{
}

+ (struct CGColor *)CGColorFromString:(id)arg1;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1 scaleFactor:(double)arg2;
+ (struct CGColor *)blackCGColor;
+ (long long)ligatureFromString:(id)arg1;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (id)stretchForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (id)stringAttributesWithAttributedString:(id)arg1 scaleFactor:(double)arg2;
+ (id)stringFromCGColor:(struct CGColor *)arg1;
+ (id)stringFromLigature:(long long)arg1;
+ (id)stringFromTextAlignment:(long long)arg1;
+ (id)styleForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;
+ (long long)textAlignmentFromString:(id)arg1;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)arg1;
+ (id)textFormatWithCTAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3;
+ (id)textFormatWithNSAttributesForText:(id)arg1 attributes:(id)arg2 scaleFactor:(double)arg3;
+ (unsigned long long)underlineStyleFromTextFormat:(id)arg1;
+ (id)weightForFontDisplayName:(id)arg1 andFamilyName:(id)arg2;

@end

