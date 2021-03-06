//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface TSWPFallbackFontList : NSObject
{
    NSDictionary *_fallbackFontList;
}

@property (strong, nonatomic) NSDictionary *fallbackFontList; // @synthesize fallbackFontList=_fallbackFontList;
@property (readonly, nonatomic) NSSet *masqueradingFontNames;
@property (readonly, nonatomic) NSSet *replaceableFontNames;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)fallbackFontNameForFontWithName:(id)arg1;
- (id)fallbackListForPostscriptFontName:(id)arg1;
- (id)init;
- (BOOL)isMasqueradingFontName:(id)arg1;
- (BOOL)shouldShowFallbackBadgeForFont:(id)arg1;

@end

