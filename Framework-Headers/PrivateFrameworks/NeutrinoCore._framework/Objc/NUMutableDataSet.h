//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet
{
}

@property (readonly, nonatomic) long long capacity;

- (struct DataSet *)_data;
- (void)addValue:(double)arg1;
- (void)appendDataSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(long long)arg1;

@end

