//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkMessage : PBCodable <NSCopying>
{
    int _action;
    NSString *_bundleId;
    NSMutableArray *_businessLinkContents;
    NSMutableArray *_categoryStyleAttributes;
    NSString *_heroImage;
    NSString *_iconImage;
    NSString *_link;
    NSString *_muid;
    NSString *_redirectUrl;
    BOOL _isPoweredBy;
    struct {
        unsigned int action:1;
        unsigned int isPoweredBy:1;
    } _has;
}

@property (nonatomic) int action; // @synthesize action=_action;
@property (strong, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (strong, nonatomic) NSMutableArray *businessLinkContents; // @synthesize businessLinkContents=_businessLinkContents;
@property (strong, nonatomic) NSMutableArray *categoryStyleAttributes; // @synthesize categoryStyleAttributes=_categoryStyleAttributes;
@property (nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic) BOOL hasIconImage;
@property (nonatomic) BOOL hasIsPoweredBy;
@property (readonly, nonatomic) BOOL hasLink;
@property (readonly, nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasRedirectUrl;
@property (strong, nonatomic) NSString *heroImage; // @synthesize heroImage=_heroImage;
@property (strong, nonatomic) NSString *iconImage; // @synthesize iconImage=_iconImage;
@property (nonatomic) BOOL isPoweredBy; // @synthesize isPoweredBy=_isPoweredBy;
@property (strong, nonatomic) NSString *link; // @synthesize link=_link;
@property (strong, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property (strong, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;

+ (Class)businessLinkContentsType;
+ (Class)categoryStyleAttributesType;
- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
- (void)addBusinessLinkContents:(id)arg1;
- (void)addCategoryStyleAttributes:(id)arg1;
- (id)businessLinkContentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessLinkContentsCount;
- (id)categoryStyleAttributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryStyleAttributesCount;
- (void)clearBusinessLinkContents;
- (void)clearCategoryStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
