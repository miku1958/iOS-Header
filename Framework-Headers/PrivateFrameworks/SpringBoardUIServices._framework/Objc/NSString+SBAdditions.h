//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SBAdditions)
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(BOOL)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(BOOL)arg4;
- (BOOL)_isEntirelyCharactersInScript:(long long)arg1;
- (BOOL)_isEntirelyCommon;
- (BOOL)_isInScript:(long long)arg1 useLocaleOnly:(BOOL)arg2;
- (BOOL)sb_containsEmoji;
- (BOOL)sb_isEntirelyCharactersInSet:(struct USet *)arg1;
@end
