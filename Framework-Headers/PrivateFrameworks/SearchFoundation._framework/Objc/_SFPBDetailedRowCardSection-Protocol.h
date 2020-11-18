//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBButton, _SFPBColor, _SFPBFormattedText, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBDetailedRowCardSection <NSObject>

@property (strong, nonatomic) _SFPBActionItem *action;
@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (strong, nonatomic) _SFPBButton *button;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSArray *descriptions;
@property (strong, nonatomic) _SFPBRichText *footnote;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasButton;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasFootnote;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasIsSecondaryTitleDetached;
@property (readonly, nonatomic) BOOL hasPreventThumbnailImageScaling;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSecondaryTitle;
@property (readonly, nonatomic) BOOL hasSecondaryTitleImage;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) BOOL hasTrailingBottomText;
@property (readonly, nonatomic) BOOL hasTrailingMiddleText;
@property (readonly, nonatomic) BOOL hasTrailingTopText;
@property (readonly, nonatomic) BOOL hasType;
@property (nonatomic) BOOL isSecondaryTitleDetached;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL preventThumbnailImageScaling;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (strong, nonatomic) _SFPBFormattedText *secondaryTitle;
@property (strong, nonatomic) _SFPBImage *secondaryTitleImage;
@property (nonatomic) int separatorStyle;
@property (strong, nonatomic) _SFPBImage *thumbnail;
@property (strong, nonatomic) _SFPBRichText *title;
@property (strong, nonatomic) _SFPBFormattedText *trailingBottomText;
@property (strong, nonatomic) _SFPBFormattedText *trailingMiddleText;
@property (strong, nonatomic) _SFPBFormattedText *trailingTopText;
@property (copy, nonatomic) NSString *type;

- (void)addDescriptions:(_SFPBRichText *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearDescriptions;
- (void)clearPunchoutOptions;
- (_SFPBRichText *)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end

