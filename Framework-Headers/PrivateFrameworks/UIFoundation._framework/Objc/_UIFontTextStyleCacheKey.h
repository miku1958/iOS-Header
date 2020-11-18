//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey
{
    BOOL _textLegibility;
    NSString *_textStyle;
    NSString *_contentSizeCategory;
}

@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (nonatomic) BOOL textLegibility; // @synthesize textLegibility=_textLegibility;
@property (copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;

- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)arg1;
- (void)dealloc;
- (id)description;

@end
