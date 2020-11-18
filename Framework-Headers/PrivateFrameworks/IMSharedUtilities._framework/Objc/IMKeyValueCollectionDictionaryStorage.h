//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/IMKeyValueCollectionStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IMKeyValueCollectionDictionaryStorage : NSObject <IMKeyValueCollectionStorage>
{
    NSMutableDictionary *_dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

