//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/NSFastEnumeration-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration>
{
    CDUnknownBlockType _objectValueClassBlock;
    CDUnknownBlockType _valueClassBlock;
    NSDictionary *_json;
    NSMutableDictionary *_objects;
    NSArray *_keys;
    unsigned long long _count;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property (readonly, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property (readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property (readonly, nonatomic) CDUnknownBlockType objectValueClassBlock; // @synthesize objectValueClassBlock=_objectValueClassBlock;
@property (readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property (readonly, nonatomic) CDUnknownBlockType valueClassBlock; // @synthesize valueClassBlock=_valueClassBlock;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)NSDictionary;
- (id)allKeys;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)initWithValueClassBlock:(CDUnknownBlockType)arg1 objectValueClassBlock:(CDUnknownBlockType)arg2 purgeBlock:(CDUnknownBlockType)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;
- (id)jsonDictionary;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;

@end

