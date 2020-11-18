//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOAbstractOperation.h>

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation
{
    BOOL _isDominating;
    int _fromIndex;
    int _toIndex;
}

@property (readonly, nonatomic) int fromIndex; // @synthesize fromIndex=_fromIndex;
@property (readonly, nonatomic) BOOL isDominating; // @synthesize isDominating=_isDominating;
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) int toIndex; // @synthesize toIndex=_toIndex;

+ (id)stringForPlacementType:(int)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)operationWithNewNoop:(BOOL)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)toString;

@end

