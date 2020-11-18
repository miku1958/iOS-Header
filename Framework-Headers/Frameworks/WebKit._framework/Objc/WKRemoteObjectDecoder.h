//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface WKRemoteObjectDecoder : NSCoder
{
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
    const struct Dictionary *_rootDictionary;
    const struct Dictionary *_currentDictionary;
    const struct Array *_objectStream;
    unsigned long long _objectStreamPosition;
    NSSet *_allowedClasses;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const struct Dictionary *)arg2;
- (BOOL)requiresSecureCoding;

@end

