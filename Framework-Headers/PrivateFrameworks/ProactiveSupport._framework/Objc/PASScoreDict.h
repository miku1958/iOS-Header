//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSharedKeySet;

@interface PASScoreDict : NSObject
{
    struct vector<float, std::__1::allocator<float>> *_mphtStorage;
    NSSharedKeySet *_sharedKeySet;
    NSMutableDictionary *_sideDict;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)scoreDictFromDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDefaultValueForKeys:(id)arg1;
- (id)initWithDefaultValueForScoreInputSetKeys:(id)arg1;
- (id)initWithDefaultValueForSharedKeySet:(id)arg1;
- (double)scoreForKey:(id)arg1 found:(BOOL *)arg2;
- (double)scoreForSharedKeySetIndex:(unsigned long long)arg1;
- (void)setScore:(double)arg1 forKey:(id)arg2;
- (void)setScore:(double)arg1 forSharedKeySetIndex:(unsigned long long)arg2;
- (id)toDictionary;

@end
