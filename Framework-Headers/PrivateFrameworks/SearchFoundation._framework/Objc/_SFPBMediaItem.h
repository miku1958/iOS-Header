//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaItem-Protocol.h>

@class NSArray, NSData, NSString, _SFPBImage, _SFPBPunchout, _SFPBText;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding>
{
    NSString *_title;
    _SFPBText *_subtitleText;
    _SFPBImage *_thumbnail;
    _SFPBImage *_reviewGlyph;
    _SFPBImage *_overlayImage;
    NSString *_reviewText;
    _SFPBPunchout *_punchout;
    NSArray *_subtitleCustomLineBreakings;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    _SFPBImage *_contentAdvisoryImage;
}

@property (copy, nonatomic) NSArray *buyOptions; // @synthesize buyOptions=_buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property (strong, nonatomic) _SFPBImage *contentAdvisoryImage; // @synthesize contentAdvisoryImage=_contentAdvisoryImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContentAdvisory;
@property (readonly, nonatomic) BOOL hasContentAdvisoryImage;
@property (readonly, nonatomic) BOOL hasOverlayImage;
@property (readonly, nonatomic) BOOL hasPunchout;
@property (readonly, nonatomic) BOOL hasReviewGlyph;
@property (readonly, nonatomic) BOOL hasReviewText;
@property (readonly, nonatomic) BOOL hasSubtitleText;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property (strong, nonatomic) _SFPBPunchout *punchout; // @synthesize punchout=_punchout;
@property (strong, nonatomic) _SFPBImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property (copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreakings; // @synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings;
@property (strong, nonatomic) _SFPBText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)addBuyOptions:(id)arg1;
- (void)addSubtitleCustomLineBreaking:(id)arg1;
- (id)buyOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buyOptionsCount;
- (void)clearBuyOptions;
- (void)clearSubtitleCustomLineBreaking;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSubtitleCustomLineBreaking:(id)arg1;
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (void)writeTo:(id)arg1;

@end

