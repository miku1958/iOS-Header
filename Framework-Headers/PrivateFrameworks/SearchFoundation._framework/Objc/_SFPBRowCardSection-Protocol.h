//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBRowCardSection <NSObject>

@property (strong, nonatomic) _SFPBImage *attributionImage;
@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL cardPaddingBottom;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (strong, nonatomic) _SFPBImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (nonatomic) int keyWeight;
@property (strong, nonatomic) _SFPBRichText *leadingSubtitle;
@property (strong, nonatomic) _SFPBRichText *leadingText;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *rightText;
@property (nonatomic) int separatorStyle;
@property (strong, nonatomic) _SFPBRichText *trailingSubtitle;
@property (strong, nonatomic) _SFPBRichText *trailingText;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (nonatomic) int valueWeight;

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end

