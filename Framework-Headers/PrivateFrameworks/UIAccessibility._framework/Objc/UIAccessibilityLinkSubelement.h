//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UITextRange;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement
{
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (readonly) UITextRange *textRange;

- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;

@end

