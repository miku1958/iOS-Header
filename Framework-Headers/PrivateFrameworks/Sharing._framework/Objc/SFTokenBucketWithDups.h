//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject
{
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray *_dups;
}

- (void).cxx_destruct;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;

@end

