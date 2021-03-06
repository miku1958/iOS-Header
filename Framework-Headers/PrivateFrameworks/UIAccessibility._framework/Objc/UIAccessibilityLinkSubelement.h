//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSURL;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement
{
    NSURL *_url;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)textRangeForTextView:(id)arg1;

@end

