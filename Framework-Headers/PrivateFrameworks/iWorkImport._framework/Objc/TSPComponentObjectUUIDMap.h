//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_objectUUIDToIdentifierDictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *identifierToObjectUUIDDictionary; // @synthesize identifierToObjectUUIDDictionary=_identifierToObjectUUIDDictionary;
@property (readonly, nonatomic) NSDictionary *objectUUIDToIdentifierDictionary; // @synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)identifierForObjectUUID:(id)arg1;
- (id)init;
- (id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2;
- (id)initWithMessage:(const RepeatedPtrField_c964a194 *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectUUIDForIdentifier:(long long)arg1;
- (void)saveToMessage:(RepeatedPtrField_c964a194 *)arg1;

@end

