//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFRowCardSection <SFCardSection>

@property (strong, nonatomic) SFImage *attributionImage;
@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL cardPaddingBottom;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (strong, nonatomic) SFImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (copy, nonatomic) NSNumber *keyWeight;
@property (strong, nonatomic) SFRichText *leadingSubtitle;
@property (strong, nonatomic) SFRichText *leadingText;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *rightText;
@property (nonatomic) int separatorStyle;
@property (strong, nonatomic) SFRichText *trailingSubtitle;
@property (strong, nonatomic) SFRichText *trailingText;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (copy, nonatomic) NSNumber *valueWeight;

@end

