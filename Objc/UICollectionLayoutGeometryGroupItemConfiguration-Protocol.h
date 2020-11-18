//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class UICollectionLayoutGeometry;

@protocol UICollectionLayoutGeometryGroupItemConfiguration <NSObject, NSCopying>

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) BOOL heightSizedToContainerHeight;
@property (readonly, nonatomic) double heightSizedToContainerHeightFactor;
@property (readonly, nonatomic) double heightSizedToContainerWidthFactor;
@property (readonly, nonatomic) BOOL heightSizedToContentHeight;
@property (readonly, copy, nonatomic) UICollectionLayoutGeometry *layoutGeometry;
@property (readonly, nonatomic) struct UIEdgeInsets requiredEdgeSpacing;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double widthSizedToContainerHeightFactor;
@property (readonly, nonatomic) BOOL widthSizedToContainerWidth;
@property (readonly, nonatomic) double widthSizedToContainerWidthFactor;
@property (readonly, nonatomic) BOOL widthSizedToContentWidth;

@end

