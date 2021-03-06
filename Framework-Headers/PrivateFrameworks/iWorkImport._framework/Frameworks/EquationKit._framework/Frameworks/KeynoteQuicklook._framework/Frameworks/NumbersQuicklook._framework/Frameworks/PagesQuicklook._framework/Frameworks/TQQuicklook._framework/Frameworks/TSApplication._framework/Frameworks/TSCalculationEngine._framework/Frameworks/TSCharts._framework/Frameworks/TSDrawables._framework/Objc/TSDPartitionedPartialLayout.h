//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout
{
    struct CGRect _bounds;
    TSDDefaultPartitioner *_partitioner;
    BOOL _isLayoutRTL;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) BOOL p_isLayoutRTL; // @synthesize p_isLayoutRTL=_isLayoutRTL;
@property (readonly, nonatomic) TSDDefaultPartitioner *partitioner; // @synthesize partitioner=_partitioner;

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)initWithInfo:(id)arg1 bounds:(struct CGRect)arg2 partitioner:(id)arg3 isLayoutRTL:(BOOL)arg4;
- (void)processChanges:(id)arg1;
- (Class)repClassOverride;
- (void)updateChildrenFromInfo;

@end

