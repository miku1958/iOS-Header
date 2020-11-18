//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying>
{
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSString *_nickname;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property (copy, nonatomic) NSString *body; // @synthesize body=_body;
@property (readonly, nonatomic) unsigned long long bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property (copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property (readonly, nonatomic) unsigned long long nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property (nonatomic) float rating; // @synthesize rating=_rating;
@property (readonly, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) unsigned long long titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReviewDictionary:(id)arg1;

@end

