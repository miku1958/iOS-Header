//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUMosaicCellSize : NSObject
{
    unsigned long long _sizeDescription;
    unsigned long long _numRows;
    unsigned long long _numCols;
}

@property (nonatomic) unsigned long long numCols; // @synthesize numCols=_numCols;
@property (nonatomic) unsigned long long numRows; // @synthesize numRows=_numRows;
@property (nonatomic) unsigned long long sizeDescription; // @synthesize sizeDescription=_sizeDescription;

+ (id)createMosaicCellSizeForSizeDescription:(unsigned long long)arg1;

@end

