//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>
{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_genreTitle;
    NSString *_contentDescription;
    NSURL *_coverArtURL;
    NSString *_canonicalID;
}

@property (copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property (copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property (copy, nonatomic) NSURL *coverArtURL; // @synthesize coverArtURL=_coverArtURL;
@property (copy, nonatomic) NSString *genreTitle; // @synthesize genreTitle=_genreTitle;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic, getter=isLocal) NSNumber *local;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_mediaEntityPropertyDidChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

