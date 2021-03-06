//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScanner, _HKCFGNodeCache;

__attribute__((visibility("hidden")))
@interface _HKCFGParseContext : NSObject
{
    NSScanner *_scanner;
    unsigned long long _lengthAllowance;
    unsigned long long _recursiveDepth;
    _HKCFGNodeCache *_cache;
}

@property (readonly, nonatomic) _HKCFGNodeCache *cache; // @synthesize cache=_cache;
@property (readonly, nonatomic) unsigned long long lengthAllowance; // @synthesize lengthAllowance=_lengthAllowance;
@property (readonly, nonatomic) unsigned long long recursiveDepth; // @synthesize recursiveDepth=_recursiveDepth;
@property (readonly, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;

- (void).cxx_destruct;
- (void)decreaseLengthAllowance:(unsigned long long)arg1;
- (void)decrementRecursiveDepth;
- (void)increaseLengthAllowance:(unsigned long long)arg1;
- (void)incrementRecursiveDepth;
- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2;

@end

