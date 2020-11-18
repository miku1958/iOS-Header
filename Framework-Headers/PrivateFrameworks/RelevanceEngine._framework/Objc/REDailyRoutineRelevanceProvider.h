//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REDailyRoutineRelevanceProvider : RERelevanceProvider
{
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)relevanceSimulatorID;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)init;
- (id)initWithDailyRoutineType:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
