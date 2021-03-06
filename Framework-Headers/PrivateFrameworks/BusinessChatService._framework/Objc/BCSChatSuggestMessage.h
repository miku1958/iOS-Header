//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestMessage : PBCodable <NSCopying>
{
    long long _phoneHash;
    NSString *_backgroundColor;
    NSString *_bizId;
    NSMutableArray *_callToActions;
    NSMutableArray *_chatOpenHours;
    NSString *_group;
    NSString *_intentId;
    NSString *_name;
    NSMutableArray *_phoneOpenHours;
    NSString *_squareLogoUrl;
    NSString *_timeZone;
    NSString *_tintColor;
    NSMutableArray *_visibilities;
    NSString *_wideLogoUrl;
    BOOL _isVerified;
    struct {
        unsigned int phoneHash:1;
        unsigned int isVerified:1;
    } _has;
}

@property (strong, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property (strong, nonatomic) NSMutableArray *callToActions; // @synthesize callToActions=_callToActions;
@property (strong, nonatomic) NSMutableArray *chatOpenHours; // @synthesize chatOpenHours=_chatOpenHours;
@property (strong, nonatomic) NSString *group; // @synthesize group=_group;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (readonly, nonatomic) BOOL hasBizId;
@property (readonly, nonatomic) BOOL hasGroup;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (nonatomic) BOOL hasIsVerified;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasPhoneHash;
@property (readonly, nonatomic) BOOL hasSquareLogoUrl;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (readonly, nonatomic) BOOL hasWideLogoUrl;
@property (strong, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property (nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long phoneHash; // @synthesize phoneHash=_phoneHash;
@property (strong, nonatomic) NSMutableArray *phoneOpenHours; // @synthesize phoneOpenHours=_phoneOpenHours;
@property (strong, nonatomic) NSString *squareLogoUrl; // @synthesize squareLogoUrl=_squareLogoUrl;
@property (strong, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property (strong, nonatomic) NSString *tintColor; // @synthesize tintColor=_tintColor;
@property (strong, nonatomic) NSMutableArray *visibilities; // @synthesize visibilities=_visibilities;
@property (strong, nonatomic) NSString *wideLogoUrl; // @synthesize wideLogoUrl=_wideLogoUrl;

+ (Class)callToActionsType;
+ (Class)chatOpenHoursType;
+ (Class)phoneOpenHoursType;
+ (Class)visibilitiesType;
- (void).cxx_destruct;
- (void)addCallToActions:(id)arg1;
- (void)addChatOpenHours:(id)arg1;
- (void)addPhoneOpenHours:(id)arg1;
- (void)addVisibilities:(id)arg1;
- (id)callToActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callToActionsCount;
- (id)chatOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)chatOpenHoursCount;
- (void)clearCallToActions;
- (void)clearChatOpenHours;
- (void)clearPhoneOpenHours;
- (void)clearVisibilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneOpenHoursCount;
- (BOOL)readFrom:(id)arg1;
- (id)visibilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibilitiesCount;
- (void)writeTo:(id)arg1;

@end

