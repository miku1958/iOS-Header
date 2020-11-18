//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface WAAQIGradient : NSObject
{
    NSMutableArray *_colors;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_colorsByIndex;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
@property (readonly, nonatomic) NSMutableDictionary *colorsByIndex; // @synthesize colorsByIndex=_colorsByIndex;
@property (readonly, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
@property (readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;

- (void).cxx_destruct;
- (void)addColor:(id)arg1;
- (id)colorForIndex:(unsigned long long)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end
