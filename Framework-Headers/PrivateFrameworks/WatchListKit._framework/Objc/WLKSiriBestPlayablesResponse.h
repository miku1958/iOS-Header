//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject
{
    NSDictionary *_dictionary;
    NSDictionary *_playablesByID;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (copy, nonatomic) NSDictionary *playablesByID; // @synthesize playablesByID=_playablesByID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playableForStatsID:(id)arg1;

@end

