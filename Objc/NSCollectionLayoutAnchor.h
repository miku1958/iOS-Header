//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface NSCollectionLayoutAnchor : NSObject <NSCopying>
{
    BOOL _offsetIsUnitOffset;
    unsigned long long _edges;
    struct CGPoint _offset;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property (nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property (readonly, nonatomic) BOOL isAbsoluteOffset;
@property (readonly, nonatomic) BOOL isFractionalOffset;
@property (nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property (nonatomic) BOOL offsetIsUnitOffset; // @synthesize offsetIsUnitOffset=_offsetIsUnitOffset;

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 unitOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(struct CGPoint)arg2;
- (struct CGRect)_itemFrameForContainerRect:(struct CGRect)arg1 itemSize:(struct CGSize)arg2 itemLayoutAnchor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end

