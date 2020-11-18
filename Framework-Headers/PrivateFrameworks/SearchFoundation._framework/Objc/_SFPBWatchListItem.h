//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBWatchListItem-Protocol.h>

@class NSData, NSString;

@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding>
{
    NSString *_watchListIdentifier;
    NSString *_seasonEpisodeTextFormat;
    NSString *_continueInTextFormat;
    NSString *_openButtonTitle;
    NSString *_installButtonTitle;
    NSString *_purchaseOfferTextFormat;
    NSString *_inUpNextText;
    NSString *_addToUpNextText;
    NSString *_addedToUpNextText;
    NSString *_watchLiveTextFormat;
}

@property (copy, nonatomic) NSString *addToUpNextText; // @synthesize addToUpNextText=_addToUpNextText;
@property (copy, nonatomic) NSString *addedToUpNextText; // @synthesize addedToUpNextText=_addedToUpNextText;
@property (copy, nonatomic) NSString *continueInTextFormat; // @synthesize continueInTextFormat=_continueInTextFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAddToUpNextText;
@property (readonly, nonatomic) BOOL hasAddedToUpNextText;
@property (readonly, nonatomic) BOOL hasContinueInTextFormat;
@property (readonly, nonatomic) BOOL hasInUpNextText;
@property (readonly, nonatomic) BOOL hasInstallButtonTitle;
@property (readonly, nonatomic) BOOL hasOpenButtonTitle;
@property (readonly, nonatomic) BOOL hasPurchaseOfferTextFormat;
@property (readonly, nonatomic) BOOL hasSeasonEpisodeTextFormat;
@property (readonly, nonatomic) BOOL hasWatchListIdentifier;
@property (readonly, nonatomic) BOOL hasWatchLiveTextFormat;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *inUpNextText; // @synthesize inUpNextText=_inUpNextText;
@property (copy, nonatomic) NSString *installButtonTitle; // @synthesize installButtonTitle=_installButtonTitle;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *openButtonTitle; // @synthesize openButtonTitle=_openButtonTitle;
@property (copy, nonatomic) NSString *purchaseOfferTextFormat; // @synthesize purchaseOfferTextFormat=_purchaseOfferTextFormat;
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat; // @synthesize seasonEpisodeTextFormat=_seasonEpisodeTextFormat;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property (copy, nonatomic) NSString *watchLiveTextFormat; // @synthesize watchLiveTextFormat=_watchLiveTextFormat;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
