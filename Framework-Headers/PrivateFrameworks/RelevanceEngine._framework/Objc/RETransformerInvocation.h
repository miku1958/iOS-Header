//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RETransformerInvocation : NSObject
{
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _values;
}

@property (readonly, nonatomic) unsigned long long numberOfArguments;

+ (id)invocationWithArguments:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getArgumentAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end

