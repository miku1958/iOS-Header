//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAnchorConstraints-Protocol.h>

@class NSArray, NSMutableArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints>
{
    NSMutableArray *_constraints;
}

@property (readonly, copy, nonatomic) NSArray *constraints;

- (void).cxx_destruct;
- (void)_keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned int)arg5 offset:(double)arg6;
- (id)init;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;
- (void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4;

@end

