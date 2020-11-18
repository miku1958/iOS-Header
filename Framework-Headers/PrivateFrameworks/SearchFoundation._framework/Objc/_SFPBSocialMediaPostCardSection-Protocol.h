//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBSocialMediaPostCardSection <NSObject>

@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasFootnote;
@property (readonly, nonatomic) BOOL hasHandle;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameMaxLines;
@property (readonly, nonatomic) BOOL hasNameNoWrap;
@property (readonly, nonatomic) BOOL hasPicture;
@property (readonly, nonatomic) BOOL hasPost;
@property (readonly, nonatomic) BOOL hasProfilePicture;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasVerifiedGlyph;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int nameMaxLines;
@property (nonatomic) BOOL nameNoWrap;
@property (strong, nonatomic) _SFPBImage *picture;
@property (strong, nonatomic) _SFPBRichText *post;
@property (strong, nonatomic) _SFPBImage *profilePicture;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *type;
@property (strong, nonatomic) _SFPBImage *verifiedGlyph;

- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end

