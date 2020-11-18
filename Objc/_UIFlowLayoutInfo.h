//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutInfo : NSObject
{
    BOOL _useFloatingHeaderFooter;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    BOOL _isValid;
    BOOL _usesFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    BOOL _estimatesSizes;
    NSMutableArray *_sections;
    double _dimension;
    UICollectionViewFlowLayout *_layout;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct CGSize _contentSize;
}

@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (nonatomic) double dimension; // @synthesize dimension=_dimension;
@property (nonatomic) BOOL estimatesSizes; // @synthesize estimatesSizes=_estimatesSizes;
@property (nonatomic) BOOL horizontal; // @synthesize horizontal=_horizontal;
@property (readonly, nonatomic) NSArray *invalidatedIndexPaths;
@property (weak, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;
@property (nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property (readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property (nonatomic) BOOL usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;

- (void).cxx_destruct;
- (id)addSection;
- (id)copy;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)init;
- (void)invalidate:(BOOL)arg1;
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (id)snapshot;

@end
