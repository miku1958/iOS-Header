//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMapCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFCommand, SFLatLng, SFMapRegion, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int interactive:1;
        unsigned int sizeFormat:1;
        unsigned int pinBehavior:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _interactive;
    int _separatorStyle;
    int _sizeFormat;
    int _pinBehavior;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFLatLng *_location;
    SFColor *_pinColor;
    NSString *_footnoteLabel;
    NSString *_footnote;
    SFMapRegion *_boundingMapRegion;
    NSArray *_pins;
}

@property (strong, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) SFMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (strong, nonatomic) SFCommand *command;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property (copy, nonatomic) NSString *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL interactive; // @synthesize interactive=_interactive;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFLatLng *location; // @synthesize location=_location;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property (strong, nonatomic) SFColor *pinColor; // @synthesize pinColor=_pinColor;
@property (copy, nonatomic) NSArray *pins; // @synthesize pins=_pins;
@property (strong, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (nonatomic) int sizeFormat; // @synthesize sizeFormat=_sizeFormat;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) SFUserReportRequest *userReportRequest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasInteractive;
- (BOOL)hasPinBehavior;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasSizeFormat;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

