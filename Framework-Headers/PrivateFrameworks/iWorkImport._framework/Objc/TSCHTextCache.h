//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUCache;

__attribute__((visibility("hidden")))
@interface TSCHTextCache : NSObject
{
    TSUCache *mTSWPTextCache;
    TSUCache *mTSWPColumnCache;
    TSUCache *mNumberWidthCache;
    TSUCache *mEqualDigitWidthFont;
}

- (void).cxx_destruct;
- (void)clear;
- (id)columnForKey:(id)arg1;
- (id)equalDigitWidthForFontName:(id)arg1;
- (id)init;
- (id)numberStringSizeForKey:(id)arg1;
- (void)setColumn:(id)arg1 forKey:(id)arg2;
- (void)setEqualDigitWidth:(id)arg1 forFontName:(id)arg2;
- (void)setNumberStringSize:(id)arg1 forKey:(id)arg2;
- (void)setText:(id)arg1 forKey:(id)arg2;
- (id)textForKey:(id)arg1;

@end

