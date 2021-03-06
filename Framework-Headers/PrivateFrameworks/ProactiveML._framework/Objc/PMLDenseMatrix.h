//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject
{
    PMLDenseVector *_data;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
}

@property (readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;

+ (id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
+ (id)denseMatrixFromNumbers:(id)arg1;
- (void).cxx_destruct;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
- (const float *)values;

@end

