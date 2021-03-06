//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSDocument.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TPSAssets, TPSContent, TPSTileContent;

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>
{
    BOOL _topFeatured;
    BOOL _containsIntroTip;
    TPSContent *_featuredContent;
    TPSTileContent *_tileContent;
    NSArray *_tipIdentifiers;
    NSString *_shortTitle;
    NSString *_countText;
}

@property (nonatomic) BOOL containsIntroTip; // @synthesize containsIntroTip=_containsIntroTip;
@property (copy, nonatomic) NSString *countText; // @synthesize countText=_countText;
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets; // @dynamic featuredAssets;
@property (copy, nonatomic) TPSContent *featuredContent; // @synthesize featuredContent=_featuredContent;
@property (readonly, copy, nonatomic) NSString *featuredTitle; // @dynamic featuredTitle;
@property (readonly, nonatomic) long long priority; // @dynamic priority;
@property (copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property (copy, nonatomic) NSString *text; // @dynamic text;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets; // @dynamic tileAssets;
@property (copy, nonatomic) TPSTileContent *tileContent; // @synthesize tileContent=_tileContent;
@property (copy, nonatomic) NSArray *tipIdentifiers; // @synthesize tipIdentifiers=_tipIdentifiers;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured; // @synthesize topFeatured=_topFeatured;

+ (id)classSet;
+ (id)collectionIdentifierForDictionary:(id)arg1;
+ (id)na_identity;
+ (BOOL)supportsSecureCoding;
+ (id)tipIdentifiersForDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2;

@end

