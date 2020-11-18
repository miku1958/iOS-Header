//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _SSBSafeHashCache : NSObject
{
    struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache>> _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addHashesForURL:(id)arg1;
- (void)clear;
- (BOOL)containsHashesForURL:(id)arg1;
- (id)init;

@end

