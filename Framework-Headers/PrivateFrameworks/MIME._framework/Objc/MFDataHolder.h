//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFDataHolder : NSObject
{
    NSMutableArray *_datas;
    unsigned long long _length;
}

@property (readonly, nonatomic) unsigned long long length; // @synthesize length=_length;

+ (id)dataHolder;
+ (id)dataHolderWithData:(id)arg1;
- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (id)data;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateConvertingNewlinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)arg1;

@end

