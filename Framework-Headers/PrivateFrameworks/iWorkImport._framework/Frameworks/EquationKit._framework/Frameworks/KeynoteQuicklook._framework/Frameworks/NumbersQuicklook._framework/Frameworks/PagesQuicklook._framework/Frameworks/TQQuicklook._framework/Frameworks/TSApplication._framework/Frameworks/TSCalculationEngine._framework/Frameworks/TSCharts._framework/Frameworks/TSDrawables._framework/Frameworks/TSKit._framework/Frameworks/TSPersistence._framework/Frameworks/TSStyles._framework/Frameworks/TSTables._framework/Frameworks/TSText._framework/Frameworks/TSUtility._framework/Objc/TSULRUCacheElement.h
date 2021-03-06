//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSULRUCacheElement : NSObject
{
    struct atomic<unsigned long> _counter;
    id _object;
    unsigned long long _counterValue;
}

@property (readonly, nonatomic) unsigned long long counterValue; // @synthesize counterValue=_counterValue;
@property (readonly, nonatomic) id object; // @synthesize object=_object;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 counter:(unsigned long long)arg2;
- (unsigned long long)p_counterValue;
- (void)p_updateCounter:(unsigned long long)arg1;

@end

