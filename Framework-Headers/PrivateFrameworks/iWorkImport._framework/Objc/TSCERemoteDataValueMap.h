//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataValueMap : NSObject <NSCopying>
{
    struct NSMutableDictionary *_data;
    NSMutableDictionary *_coldDataByYear;
}

@property (strong, nonatomic) NSMutableDictionary *coldDataByYear; // @synthesize coldDataByYear=_coldDataByYear;
@property (readonly, nonatomic) long long count;
@property (strong, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;

+ (id)valueMap;
+ (id)valueMapWithSpecifier:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (void)addValuesFromMap:(id)arg1;
- (id)allSpecifiers;
- (BOOL)containsValueForAllSpecifiersInSet:(id)arg1;
- (BOOL)containsValueForSpecifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateSpecifiersAndValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initFromArchive:(const struct RemoteDataValueMapArchive *)arg1;
- (id)initWithData:(struct NSMutableDictionary *)arg1;
- (id)mapForSingleSpecifier:(id)arg1;
- (id)mapForSpecifiersInSet:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (struct NSMutableDictionary *)p_mapForSpecifier:(id)arg1 createIfMissing:(BOOL)arg2;
- (struct NSMutableDictionary *)p_mapForYear:(id)arg1 createIfMissing:(BOOL)arg2;
- (void)p_saveMap:(struct NSMutableDictionary *)arg1 toArchive:(struct RemoteDataValueMapArchive *)arg2;
- (void)removeAllValues;
- (void)removeValueForSpecifier:(id)arg1;
- (void)removeValuesForSpecifierSet:(id)arg1;
- (void)saveToArchive:(struct RemoteDataValueMapArchive *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forSpecifier:(id)arg2;
- (id)updateWithValuesFromMap:(id)arg1 overwriteValues:(BOOL)arg2;
- (id)valueForSpecifier:(id)arg1;

@end
