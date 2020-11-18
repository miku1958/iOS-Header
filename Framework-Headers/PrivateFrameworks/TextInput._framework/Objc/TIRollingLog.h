//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface TIRollingLog : NSObject <NSCopying>
{
    NSMutableArray *_entries;
    unsigned long long _nextIndex;
    unsigned long long _count;
    unsigned long long _maxCount;
}

@property (readonly, nonatomic) NSArray *currentEntries;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end

