//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSATheme.h>

__attribute__((visibility("hidden")))
@interface TPTheme : TSATheme
{
}

+ (void)initialize;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;
- (id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2;
- (id)bodyStyle;
- (id)footnoteStyle;
- (id)headerAndFooterStyle;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end

