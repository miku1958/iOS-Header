//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSIndexSet, NSString, PXLayoutMetrics;

@interface PXLayoutGenerator : NSObject <NSCopying>
{
    PXLayoutMetrics *_metrics;
    unsigned long long _itemCount;
    unsigned long long _keyItemIndex;
    CDUnknownBlockType _itemLayoutInfoBlock;
}

@property (readonly, nonatomic) struct _PXCornerSpriteIndexes cornerSpriteIndexes;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) struct CGSize estimatedSize;
@property (readonly, nonatomic) NSIndexSet *geometryKinds;
@property (nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property (copy, nonatomic) CDUnknownBlockType itemLayoutInfoBlock; // @synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock;
@property (nonatomic) unsigned long long keyItemIndex; // @synthesize keyItemIndex=_keyItemIndex;
@property (copy, nonatomic) PXLayoutMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly, nonatomic) struct CGSize size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;

@end

