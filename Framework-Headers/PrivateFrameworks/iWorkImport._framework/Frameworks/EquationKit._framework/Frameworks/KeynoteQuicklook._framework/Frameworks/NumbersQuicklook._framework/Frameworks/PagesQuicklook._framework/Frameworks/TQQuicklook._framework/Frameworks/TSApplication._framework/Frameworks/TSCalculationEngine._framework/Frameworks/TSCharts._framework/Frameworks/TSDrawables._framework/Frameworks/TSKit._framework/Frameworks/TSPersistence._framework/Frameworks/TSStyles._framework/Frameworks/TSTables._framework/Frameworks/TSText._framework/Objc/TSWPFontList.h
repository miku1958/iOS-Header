//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface TSWPFontList : NSObject
{
    NSDictionary *_knownFonts;
    CDUnknownBlockType _fontPropertyResolver;
    NSSet *_downloadedFonts;
    NSDictionary *_knownFontFamilyFaces;
    NSArray *_recentFontNames;
}

@property (strong) NSSet *downloadedFonts; // @synthesize downloadedFonts=_downloadedFonts;
@property (copy, nonatomic) CDUnknownBlockType fontPropertyResolver; // @synthesize fontPropertyResolver=_fontPropertyResolver;
@property (strong) NSDictionary *knownFontFamilyFaces; // @synthesize knownFontFamilyFaces=_knownFontFamilyFaces;
@property (strong) NSDictionary *knownFonts; // @synthesize knownFonts=_knownFonts;
@property (strong) NSArray *recentFontNames; // @synthesize recentFontNames=_recentFontNames;
@property (readonly) NSArray *recentFonts;

+ (id)excludedFamilyNames;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)availableFontFamilies;
- (void)cacheFaces:(id)arg1 forFontFamily:(id)arg2;
- (void)cacheFont:(id)arg1 forPostScriptName:(id)arg2 atSize:(double)arg3 bold:(BOOL)arg4 italic:(BOOL)arg5;
- (void)cacheFont:(id)arg1 withKey:(id)arg2;
- (id)cacheKeyForFontWithPostScriptName:(id)arg1 atSize:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4;
- (id)cachedFacesOfFontFamily:(id)arg1;
- (void)downloadableFontsChanged:(id)arg1;
- (void)dropFontsWithPSNamesInSet:(id)arg1;
- (id)familyNameFromFontDescriptor:(struct __CTFontDescriptor *)arg1;
- (id)fontFacesForFontFamily:(id)arg1;
- (id)fontForKey:(id)arg1;
- (id)fontForPostscriptName:(id)arg1;
- (id)fontForPostscriptName:(id)arg1 atSize:(double)arg2;
- (id)fontForPostscriptName:(id)arg1 atSize:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4;
- (id)fontForStyles:(id)arg1;
- (id)fontFromStyle:(id)arg1;
- (void)fontsChanged:(id)arg1;
- (id)fontsForAvailableFamilies;
- (id)init;
- (void)loadRecentFonts;
- (id)normalizeChangedFontUrlsToStrings:(id)arg1 forKey:(id)arg2;
- (id)postScriptNameForFamilyName:(id)arg1;
- (void)registerDownloadedFontPostScriptNames:(id)arg1;
- (void)registerRecentFont:(id)arg1;
- (void)reset;
- (void)saveRecentFontNames:(id)arg1;
- (id)sortedFontFamilies;
- (id)sortedFontsInStylesheet:(id)arg1;

@end
