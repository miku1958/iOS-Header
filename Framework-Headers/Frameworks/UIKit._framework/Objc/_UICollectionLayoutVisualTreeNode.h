//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem
{
    NSArray *_children;
    unsigned long long _axis;
}

@property (nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property (strong, nonatomic) NSArray *children; // @synthesize children=_children;

- (void).cxx_destruct;
- (id)description;
- (id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3;
- (BOOL)isHorizontalGroup;
- (BOOL)isVerticalGroup;

@end
