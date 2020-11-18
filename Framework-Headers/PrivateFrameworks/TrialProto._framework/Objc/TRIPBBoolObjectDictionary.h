//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;
    id _values[2];
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
- (id)initWithObjects:(const id *)arg1 forKeys:(const BOOL *)arg2 count:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInitialized;
- (id)objectForKey:(BOOL)arg1;
- (void)removeAll;
- (void)removeObjectForKey:(BOOL)arg1;
- (void)setObject:(id)arg1 forKey:(BOOL)arg2;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end
