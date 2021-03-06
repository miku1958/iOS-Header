//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject
{
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    long long mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (void).cxx_destruct;
- (id)characterProperties;
- (id)description;
- (id)image;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (id)initWithDocument:(id)arg1;
- (int)justification;
- (BOOL)justificationOverridden;
- (BOOL)legacy;
- (long long)legacyIndent;
- (long long)legacySpace;
- (BOOL)legal;
- (BOOL)legalOverridden;
- (int)numberFormat;
- (BOOL)numberFormatOverridden;
- (id)paragraphProperties;
- (long long)restartLevel;
- (BOOL)restartLevelOverridden;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (void)setImage:(id)arg1;
- (void)setJustification:(int)arg1;
- (void)setLegacy:(BOOL)arg1;
- (void)setLegacyIndent:(long long)arg1;
- (void)setLegacySpace:(long long)arg1;
- (void)setLegal:(BOOL)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setRestartLevel:(long long)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (void)setStartNumber:(long long)arg1;
- (void)setSuffix:(int)arg1;
- (void)setText:(id)arg1;
- (long long)startNumber;
- (BOOL)startNumberOverridden;
- (int)suffix;
- (BOOL)suffixOverridden;
- (id)text;
- (BOOL)textOverridden;

@end

