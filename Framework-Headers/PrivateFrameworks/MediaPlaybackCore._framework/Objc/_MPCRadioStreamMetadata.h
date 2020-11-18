//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, RadioArtworkCollection;

@interface _MPCRadioStreamMetadata : NSObject
{
    BOOL _hasLyrics;
    long long _albumBuyButtonType;
    NSString *_albumBuyButtonText;
    NSString *_album;
    NSString *_artist;
    RadioArtworkCollection *_artworkCollection;
    NSNumber *_explicit;
    NSString *_title;
}

@property (copy, nonatomic) NSString *album; // @synthesize album=_album;
@property (copy, nonatomic) NSString *albumBuyButtonText; // @synthesize albumBuyButtonText=_albumBuyButtonText;
@property (nonatomic) long long albumBuyButtonType; // @synthesize albumBuyButtonType=_albumBuyButtonType;
@property (copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property (strong, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
@property (strong, nonatomic, getter=isExplicit) NSNumber *explicit; // @synthesize explicit=_explicit;
@property (nonatomic) BOOL hasLyrics; // @synthesize hasLyrics=_hasLyrics;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
