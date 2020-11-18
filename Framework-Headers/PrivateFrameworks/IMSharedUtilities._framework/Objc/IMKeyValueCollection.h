//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMKeyValueCollectionStorage-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IMKeyValueCollectionDelegate, IMKeyValueCollectionStorage;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying>
{
    long long _batchCount;
    id<IMKeyValueCollectionStorage> _keyValueStorage;
    id<IMKeyValueCollectionDelegate> _delegate;
    NSMutableDictionary *_recordedChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IMKeyValueCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<IMKeyValueCollectionStorage> keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property (readonly) NSMutableDictionary *recordedChanges; // @synthesize recordedChanges=_recordedChanges;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_broadcastIfNeeded;
- (void)_commitBatchWrite;
- (void)_notifyListeners;
- (void)_recordChange:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_startBatchWrite;
- (void)addErrorToArray:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 withDefault:(double)arg2;
- (id)errorArrayForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)init;
- (id)initWithKeyValueStorage:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 withDefault:(long long)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 withDefault:(long long)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withDefault:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setError:(id)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUint64:(long long)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 withDefault:(id)arg2;
- (unsigned long long)uint64ForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2;

@end

