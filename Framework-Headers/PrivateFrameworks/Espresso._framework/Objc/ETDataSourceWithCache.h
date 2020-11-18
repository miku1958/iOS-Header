//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithCache : NSObject <ETDataSource>
{
    id<ETDataSource> _source;
    struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *>>> _cache;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> dump_path;
    BOOL dump_descriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;
- (int)numberOfDataPoints;

@end

