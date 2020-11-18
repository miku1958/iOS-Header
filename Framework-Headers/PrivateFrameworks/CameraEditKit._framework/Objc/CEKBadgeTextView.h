//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKBadgeView.h>

@class NSDictionary, NSString;

@interface CEKBadgeTextView : CEKBadgeView
{
    NSString *_contentSizeCategory;
    unsigned long long _fontStyle;
    NSDictionary *__textAttributes;
    NSString *__text;
    struct UIEdgeInsets __textInsets;
}

@property (copy, nonatomic, setter=_setText:) NSString *_text; // @synthesize _text=__text;
@property (strong, nonatomic, setter=_setTextAttributes:) NSDictionary *_textAttributes; // @synthesize _textAttributes=__textAttributes;
@property (nonatomic, setter=_setTextInsets:) struct UIEdgeInsets _textInsets; // @synthesize _textInsets=__textInsets;
@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (nonatomic) unsigned long long fontStyle; // @synthesize fontStyle=_fontStyle;

+ (struct UIEdgeInsets)_defaultTextInsets;
+ (id)_fontForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2;
+ (double)_heightForContentSize:(id)arg1 textInsets:(struct UIEdgeInsets)arg2;
+ (id)_textAttributesForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2;
+ (double)_textHeightForContentSize:(id)arg1;
- (void).cxx_destruct;
- (id)_maskImage;
- (struct CGSize)_textSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end
