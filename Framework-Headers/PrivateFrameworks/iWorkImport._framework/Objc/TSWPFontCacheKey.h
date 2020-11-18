//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPFontCacheKey : NSObject
{
    BOOL _hasExtraFields;
    BOOL _bold;
    BOOL _italic;
    NSString *_fontName;
    double _fontSize;
    NSArray *_fontFeatures;
    unsigned long long _fontNameSizeHash;
}

@property (readonly, nonatomic) BOOL bold; // @synthesize bold=_bold;
@property (readonly, copy, nonatomic) NSArray *fontFeatures; // @synthesize fontFeatures=_fontFeatures;
@property (readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (readonly, nonatomic) unsigned long long fontNameSizeHash; // @synthesize fontNameSizeHash=_fontNameSizeHash;
@property (readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (readonly, nonatomic) BOOL hasExtraFields; // @synthesize hasExtraFields=_hasExtraFields;
@property (readonly, nonatomic) BOOL italic; // @synthesize italic=_italic;

+ (id)cacheKeyWithFontName:(id)arg1 fontSize:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 fontFeatures:(id)arg5;
+ (id)cacheKeyWithFontName:(id)arg1 size:(double)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 hasExtraFields:(BOOL)arg3 bold:(BOOL)arg4 italic:(BOOL)arg5 fontFeatures:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end

