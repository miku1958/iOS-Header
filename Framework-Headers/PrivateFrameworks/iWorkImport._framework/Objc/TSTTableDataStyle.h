//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSSStyle;

__attribute__((visibility("hidden")))
@interface TSTTableDataStyle : TSTTableDataObject
{
    TSSStyle *_style;
}

@property (readonly, nonatomic) TSSStyle *style; // @synthesize style=_style;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithStyle:(id)arg1 refCount:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;

@end
