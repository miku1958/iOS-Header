//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKObjectCache : NSObject
{
    unsigned long long _maxSize;
    NSMutableDictionary *_cache;
}

@property (strong) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property unsigned long long maxSize; // @synthesize maxSize=_maxSize;

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)count;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (BOOL)isFilled;
- (id)objectForKey:(id)arg1;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;

@end

