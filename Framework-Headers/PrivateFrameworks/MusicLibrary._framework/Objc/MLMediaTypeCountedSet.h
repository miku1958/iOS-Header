//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLMediaTypeCountedSet : NSObject
{
    struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> _map;
    unsigned long long _count;
}

@property (nonatomic) unsigned long long count; // @synthesize count=_count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMediaType:(unsigned int)arg1 count:(unsigned long long)arg2;
- (id)description;
- (void)enumerateMediaTypesWithBlock:(CDUnknownBlockType)arg1;

@end

