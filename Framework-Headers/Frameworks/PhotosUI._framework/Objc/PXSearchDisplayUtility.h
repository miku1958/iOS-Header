//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXSearchDisplayUtility : NSObject
{
}

+ (struct UIImage *)_px_PhotosImageNamed:(id)arg1;
+ (BOOL)attributedStringFontNeedsUpdate:(id)arg1 currentFont:(struct UIFont *)arg2;
+ (double)automaticRowHeight;
+ (id)defaultStringAttributes;
+ (id)displayStringFromResultCount:(unsigned long long)arg1;
+ (id)highlightedAttributedStringForString:(id)arg1 highlightedSubstring:(id)arg2 matchedColor:(struct UIColor *)arg3 remainingColor:(struct UIColor *)arg4;
+ (struct UIImage *)imageForImageName:(id)arg1;
+ (BOOL)layoutDirectionIsRTL;
+ (BOOL)shouldUseAccessibilityLayout;
+ (struct UIColor *)wordEmbeddingPathColor;
+ (struct UIColor *)wordEmbeddingTextColor;

@end
