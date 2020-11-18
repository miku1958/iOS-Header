//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityTextLineElement : UIAccessibilityElement
{
    struct _NSRange _range;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect textBounds; // @synthesize textBounds=_bounds;
@property (nonatomic) struct _NSRange textRange; // @synthesize textRange=_range;

- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end

