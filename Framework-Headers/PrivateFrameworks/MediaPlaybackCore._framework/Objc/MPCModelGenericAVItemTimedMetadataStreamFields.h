//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject
{
    BOOL _explicitContent;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSArray *_artworkDictionaries;
}

@property (copy, nonatomic) NSString *album; // @synthesize album=_album;
@property (copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property (copy, nonatomic) NSArray *artworkDictionaries; // @synthesize artworkDictionaries=_artworkDictionaries;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent; // @synthesize explicitContent=_explicitContent;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

