//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TSCERemoteDataValueMap : NSObject <NSCopying>
{
    struct unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *, TSCECellValue *>*, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *, TSCECellValue *>*>>> _coldDataByYear;
    NSMutableDictionary *_data;
}

@property (readonly, nonatomic) long long count;
@property (strong, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;

+ (id)valueMap;
+ (id)valueMapWithSpecifier:(id)arg1 value:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addValuesFromMap:(id)arg1;
- (id)allSpecifiers;
- (BOOL)containsValueForAllSpecifiersInSet:(id)arg1;
- (BOOL)containsValueForSpecifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateSpecifiersAndValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initFromArchive:(const struct RemoteDataValueMapArchive *)arg1;
- (id)initWithData:(id)arg1;
- (id)mapForSingleSpecifier:(id)arg1;
- (id)mapForSpecifiersInSet:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)p_enumerateYearMapsWithBlock:(CDUnknownBlockType)arg1;
- (void)p_saveMap:(id)arg1 toArchive:(struct RemoteDataValueMapArchive *)arg2;
- (void)removeAllValues;
- (void)removeValueForSpecifier:(id)arg1;
- (void)removeValuesForSpecifierSet:(id)arg1;
- (void)saveToArchive:(struct RemoteDataValueMapArchive *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forSpecifier:(id)arg2;
- (id)updateWithValuesFromMap:(id)arg1 overwriteValues:(BOOL)arg2;
- (id)valueForSpecifier:(id)arg1;

@end
