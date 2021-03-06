//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper
{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    unsigned long long columnSpan;
}

- (void).cxx_destruct;
- (double)columnWidth;
- (id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end

