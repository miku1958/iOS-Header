//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject
{
}

@property (readonly) DOMCSSPrimitiveValue *alpha;
@property (readonly) DOMCSSPrimitiveValue *blue;
@property (readonly) DOMCSSPrimitiveValue *green;
@property (readonly) DOMCSSPrimitiveValue *red;

- (struct CGColor *)color;
- (void)dealloc;
- (void)finalize;

@end
