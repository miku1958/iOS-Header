//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPStorageRangeProvider.h>

__attribute__((visibility("hidden")))
@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider
{
    struct TSWPAttributeEnumerator *_enumerator;
}

- (void)dealloc;
- (id)initWithStorage:(id)arg1 kind:(unsigned long long)arg2;
- (void)nextRange;

@end

