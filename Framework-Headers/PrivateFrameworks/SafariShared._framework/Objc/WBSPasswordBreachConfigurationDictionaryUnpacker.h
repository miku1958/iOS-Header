//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject
{
    NSDictionary *_dictionary;
    BOOL _errorOccurred;
}

@property (readonly, nonatomic) BOOL errorOccurred; // @synthesize errorOccurred=_errorOccurred;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forKey:(id)arg2 required:(BOOL)arg3;
- (id)dataFromHexStringForKey:(id)arg1 expectedLength:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (BOOL)optionalBoolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)sortedUnsignedIntegerArrayForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3 ascending:(BOOL)arg4;
- (id)stringForKey:(id)arg1 minimumLength:(unsigned long long)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 minimumValue:(unsigned long long)arg2 maximumValue:(unsigned long long)arg3;

@end

