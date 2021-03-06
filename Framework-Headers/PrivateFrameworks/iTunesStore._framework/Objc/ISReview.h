//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>
#import <iTunesStore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ISReview : NSObject <NSSecureCoding, NSCopying>
{
    long long _assetType;
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    BOOL _nicknameIsConfirmed;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property (nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property (strong, nonatomic) NSString *body; // @synthesize body=_body;
@property (nonatomic) unsigned long long bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property (readonly, nonatomic) BOOL hasSavedDraft;
@property (strong, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property (nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property (nonatomic) BOOL nicknameIsConfirmed; // @synthesize nicknameIsConfirmed=_nicknameIsConfirmed;
@property (nonatomic) unsigned long long nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property (nonatomic) float rating; // @synthesize rating=_rating;
@property (strong, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;

+ (BOOL)supportsSecureCoding;
- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2;
- (BOOL)removeDraft;
- (BOOL)restoreFromDraft;
- (BOOL)saveAsDraft;

@end

