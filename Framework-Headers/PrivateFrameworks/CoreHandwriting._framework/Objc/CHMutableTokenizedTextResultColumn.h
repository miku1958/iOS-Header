//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn
{
}

@property (copy, nonatomic) NSArray *tokenRows; // @dynamic tokenRows;

- (id)_mutableTokenRows;
- (long long)addTokenRowWithTokens:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTokenRows:(id)arg1;
- (void)removeTokenRowAtIndex:(long long)arg1;
- (void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2;
- (void)sortTokenRows;

@end
