//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

#import <MobileTimer/MTCoder-Protocol.h>

@class NSMutableArray;

@interface MTStorageReader : NSCoder <MTCoder>
{
    NSMutableArray *_stack;
}

@property (strong, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;

+ (BOOL)_dictionaryIsForSerializableObject:(id)arg1;
+ (id)_unwrap:(id)arg1;
- (void).cxx_destruct;
- (id)_decodeObject:(id)arg1;
- (id)_objectForDictionary:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (BOOL)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (BOOL)mt_isReadingFromPersistence;
- (BOOL)mt_isWritingToPersistence;
- (BOOL)mt_isWritingToStorage;

@end
