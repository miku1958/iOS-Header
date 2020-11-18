//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObjectEncoder : NSCoder
{
    struct RefPtr<API::Dictionary, WTF::DumbPtrTraits<API::Dictionary>> _rootDictionary;
    struct Array *_objectStream;
    struct Dictionary *_currentDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (id)init;
- (BOOL)requiresSecureCoding;
- (struct Dictionary *)rootObjectDictionary;

@end
