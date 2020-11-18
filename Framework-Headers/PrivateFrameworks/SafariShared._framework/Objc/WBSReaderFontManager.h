//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject
{
    NSArray *_validatedFonts;
    NSString *_languageTag;
}

@property (readonly) NSArray *fonts;
@property (readonly) NSString *languageTag; // @synthesize languageTag=_languageTag;

- (void).cxx_destruct;
- (id)defaultFontForLanguageTag:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (void)updateLanguageTag:(id)arg1;

@end

