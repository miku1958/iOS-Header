//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTTableHeaderInfo;

@protocol TSTTableHeaderStorage <NSObject>
- (long long)count;
- (void)enumerateHeadersWithBlock:(void (^)(TSTTableHeaderInfo *, unsigned int, BOOL *))arg1;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned int)arg2;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;
@end

