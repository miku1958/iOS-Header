//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying>
{
    NSString *_actionURLString;
    NSString *_articleID;
    NSString *_displayDateString;
    NTPBTodaySectionConfigArticle *_paidArticle;
    NSString *_storyType;
    NSString *_title;
}

@property (strong, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property (strong, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property (strong, nonatomic) NSString *displayDateString; // @synthesize displayDateString=_displayDateString;
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (readonly, nonatomic) BOOL hasDisplayDateString;
@property (readonly, nonatomic) BOOL hasPaidArticle;
@property (readonly, nonatomic) BOOL hasStoryType;
@property (readonly, nonatomic) BOOL hasTitle;
@property (strong, nonatomic) NTPBTodaySectionConfigArticle *paidArticle; // @synthesize paidArticle=_paidArticle;
@property (strong, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

