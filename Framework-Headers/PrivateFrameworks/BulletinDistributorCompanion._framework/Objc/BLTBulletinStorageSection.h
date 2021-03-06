//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTBulletinStorageSection : NSObject
{
    unsigned long long _totalContextSize;
    unsigned long long _maxContextSize;
    NSMutableArray *_bulletins;
    NSMutableDictionary *_bulletinIDToBulletin;
}

@property (readonly, nonatomic) NSMutableDictionary *bulletinIDToBulletin; // @synthesize bulletinIDToBulletin=_bulletinIDToBulletin;
@property (readonly, nonatomic) NSMutableArray *bulletins; // @synthesize bulletins=_bulletins;
@property (readonly, nonatomic) unsigned long long maxContextSize; // @synthesize maxContextSize=_maxContextSize;
@property (readonly, nonatomic) unsigned long long totalContextSize; // @synthesize totalContextSize=_totalContextSize;

- (void).cxx_destruct;
- (id)addOrReplaceBulletin:(id)arg1;
- (id)initWithMaxContextSize:(unsigned long long)arg1;
- (void)removeBulletin:(id)arg1;

@end

