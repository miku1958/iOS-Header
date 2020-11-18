//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInitialized;
- (id)objectForKey:(long long)arg1;
- (void)removeAll;
- (void)removeObjectForKey:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end
