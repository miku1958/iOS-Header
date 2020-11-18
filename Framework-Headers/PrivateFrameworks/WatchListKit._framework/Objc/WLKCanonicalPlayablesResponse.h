//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WLKCanonicalPlayablesResponse : NSObject
{
    BOOL _watchListable;
    BOOL _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    unsigned long long _contentType;
    NSArray *_playables;
}

@property (readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property (readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly, nonatomic) NSArray *playables; // @synthesize playables=_playables;
@property (readonly, nonatomic, getter=isWatchListable) BOOL watchListable; // @synthesize watchListable=_watchListable;
@property (readonly, nonatomic, getter=isWatchListed) BOOL watchListed; // @synthesize watchListed=_watchListed;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
