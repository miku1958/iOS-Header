//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

#import <TSTables/NSCopying-Protocol.h>

@class NSArray;

@interface TSTColumnAggregateList : TSKSosBase <NSCopying>
{
    NSArray *_columnAggregates;
}

@property (readonly, nonatomic) NSArray *asArray;

- (void).cxx_destruct;
- (id)aggregatesOnLevel:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeToArchive:(struct ColumnAggregateListArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ColumnAggregateListArchive *)arg1;
- (id)initWithColumnAggregates:(id)arg1;

@end

