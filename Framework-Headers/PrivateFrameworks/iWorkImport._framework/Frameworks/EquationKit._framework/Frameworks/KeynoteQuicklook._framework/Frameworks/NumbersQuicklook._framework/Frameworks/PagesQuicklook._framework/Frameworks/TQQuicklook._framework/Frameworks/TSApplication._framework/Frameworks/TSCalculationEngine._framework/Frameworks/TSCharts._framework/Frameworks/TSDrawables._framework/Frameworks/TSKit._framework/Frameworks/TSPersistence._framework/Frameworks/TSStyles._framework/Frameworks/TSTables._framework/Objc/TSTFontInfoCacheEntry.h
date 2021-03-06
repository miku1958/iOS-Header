//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPTextMeasurerBundle;

@interface TSTFontInfoCacheEntry : NSObject
{
    struct os_unfair_lock_s _lock[8];
    struct unordered_map<TSTFontInfoCacheDupContentEntry, double, std::__1::hash<TSTFontInfoCacheDupContentEntry>, std::__1::equal_to<TSTFontInfoCacheDupContentEntry>, std::__1::allocator<std::__1::pair<const TSTFontInfoCacheDupContentEntry, double>>> _dupContentEntryToHeightCache[8];
    struct unordered_map<TSTFontInfoCacheDupContentEntry, double, std::__1::hash<TSTFontInfoCacheDupContentEntry>, std::__1::equal_to<TSTFontInfoCacheDupContentEntry>, std::__1::allocator<std::__1::pair<const TSTFontInfoCacheDupContentEntry, double>>> _dupContentEntryToWidthCache[8];
    TSWPTextMeasurerBundle *_textMeasurerBundle;
}

@property (strong, nonatomic) TSWPTextMeasurerBundle *textMeasurerBundle; // @synthesize textMeasurerBundle=_textMeasurerBundle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)heightForString:(id)arg1 width:(double)arg2 outFitWidth:(inout double *)arg3;
- (id)initWithTextMeasurerBundle:(id)arg1;
- (double)widthForString:(id)arg1;

@end

