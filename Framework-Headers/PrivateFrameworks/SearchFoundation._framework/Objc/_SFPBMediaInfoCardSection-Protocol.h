//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaDetail, _SFPBMediaItem, _SFPBMediaOffer, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBMediaInfoCardSection <NSObject>

@property (strong, nonatomic) _SFPBColor *backgroundColor;
@property (nonatomic) BOOL canBeHidden;
@property (copy, nonatomic) NSArray *details;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL isMediaContainer;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBMediaItem *mediaItem;
@property (copy, nonatomic) NSArray *offers;
@property (strong, nonatomic) _SFPBActionItem *playAction;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (strong, nonatomic) _SFPBRichText *specialOfferButtonLabel;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *watchListButtonLabel;
@property (copy, nonatomic) NSString *watchListConfirmationText;
@property (copy, nonatomic) NSString *watchListContinuationText;
@property (copy, nonatomic) NSString *watchListIdentifier;

- (void)addDetails:(_SFPBMediaDetail *)arg1;
- (void)addOffers:(_SFPBMediaOffer *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearDetails;
- (void)clearOffers;
- (void)clearPunchoutOptions;
- (_SFPBMediaDetail *)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
@end
