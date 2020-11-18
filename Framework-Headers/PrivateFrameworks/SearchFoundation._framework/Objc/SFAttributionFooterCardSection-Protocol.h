//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFPunchout, SFRichText;

@protocol SFAttributionFooterCardSection <SFCardSection>

@property (strong, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFRichText *leadingAttribution;
@property (strong, nonatomic) SFPunchout *leadingAttributionPunchout;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (strong, nonatomic) SFRichText *trailingAttribution;
@property (strong, nonatomic) SFPunchout *trailingAttributionPunchout;
@property (copy, nonatomic) NSString *type;

@end
