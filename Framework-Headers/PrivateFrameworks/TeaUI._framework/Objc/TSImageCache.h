//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSImageCache : NSObject
{
    MISSING_TYPE *downloader;
    MISSING_TYPE *processor;
    MISSING_TYPE *underlyingCache;
    MISSING_TYPE *fetchDeduper;
    MISSING_TYPE *mainLRU;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;
- (id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3;

@end
