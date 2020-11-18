//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUUUIDSetStore;

__attribute__((visibility("hidden")))
@interface TSUUUIDSubsetCreator : NSObject
{
    TSUUUIDSetStore *_uuidSetStore;
    vector_4dc5f307 _baseUuidVector;
    NSMutableDictionary *_createdSubsetsByRange;
}

@property (readonly) const vector_4dc5f307 *baseUuidVector; // @synthesize baseUuidVector=_baseUuidVector;
@property (readonly) TSUUUIDSetStore *uuidSetStore; // @synthesize uuidSetStore=_uuidSetStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector_4dc5f307 *)arg2;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange)arg1;

@end
