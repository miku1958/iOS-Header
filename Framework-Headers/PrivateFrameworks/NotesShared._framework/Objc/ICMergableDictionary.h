//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRDictionary, CRDocument;

@interface ICMergableDictionary : NSObject
{
    CRDocument *_underlyingDocument;
    CRDictionary *_underlyingDictionary;
}

@property (strong, nonatomic) CRDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
@property (strong, nonatomic) CRDocument *underlyingDocument; // @synthesize underlyingDocument=_underlyingDocument;

+ (id)decodeDictionaryFromData:(id)arg1;
+ (id)encodedDataWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReplicaID:(id)arg1;
- (BOOL)mergeWithMergableDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

