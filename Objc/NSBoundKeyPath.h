//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSBoundKeyPath : NSObject
{
    id _rootObject;
    NSString *_keyPath;
}

@property (readonly) NSString *keyPath;
@property id rootObject;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathWithRootObject:(id)arg1 path:(const char *)arg2;
+ (id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;
- (void)setValue:(id)arg1;
- (BOOL)validateValue:(inout id *)arg1 error:(out id *)arg2;
- (id)value;

@end
