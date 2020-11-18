//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEOCacheUsageMonitor_TileCacheData : NSObject
{
    unsigned int _count;
    unsigned int _byteCount;
    NSMutableDictionary *_errorsDict;
}

@property (nonatomic) unsigned int byteCount; // @synthesize byteCount=_byteCount;
@property (nonatomic) unsigned int count; // @synthesize count=_count;
@property (readonly, nonatomic) NSArray *errors;

- (void).cxx_destruct;
- (void)addErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)init;
- (BOOL)wouldWrapWithByteCount:(unsigned int)arg1;

@end

