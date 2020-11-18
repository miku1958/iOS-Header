//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface IKDataBinding : NSObject
{
    NSDictionary *_entriesByKey;
    NSMutableSet *_unresolvedKeys;
    NSDictionary *_keyValues;
    NSSet *_dataBoundKeys;
}

@property (readonly, nonatomic) NSSet *dataBoundKeys; // @synthesize dataBoundKeys=_dataBoundKeys;
@property (copy, nonatomic) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
@property (readonly, nonatomic) NSSet *unresolvedKeys;

- (void).cxx_destruct;
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1;
- (id)initWithEntries:(id)arg1;
- (id)keysWithAnyOfAttributes:(unsigned long long)arg1;
- (void)markResolvedForKey:(id)arg1;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)arg1;
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1;

@end
