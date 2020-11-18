//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSObject-Protocol.h>

@class NSArray;

@protocol UICollectionLayoutGeometryGroupConfiguration <NSObject, NSCopying>

@property (readonly, nonatomic) BOOL alignJustified;
@property (readonly, nonatomic) BOOL alignOrthogonallyCentered;
@property (readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property (readonly, nonatomic) long long gridColumns;
@property (readonly, nonatomic, getter=isGridGroup) BOOL gridGroup;
@property (readonly, nonatomic) long long gridRows;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) BOOL heightSizedToContainerHeight;
@property (readonly, nonatomic) double heightSizedToContainerHeightFactor;
@property (readonly, nonatomic) BOOL heightSizedToContentHeight;
@property (readonly, nonatomic, getter=isHorizontalGroup) BOOL horizontalGroup;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) NSArray *itemConfigurations;
@property (readonly, nonatomic) double lineSpacing;
@property (readonly, nonatomic) long long maximumNumberOfItems;
@property (readonly, nonatomic) long long repeatCount;
@property (readonly, nonatomic, getter=isVerticalGroup) BOOL verticalGroup;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) BOOL widthSizedToContainerWidth;
@property (readonly, nonatomic) double widthSizedToContainerWidthFactor;
@property (readonly, nonatomic) BOOL widthSizedToContentWidth;

@end
