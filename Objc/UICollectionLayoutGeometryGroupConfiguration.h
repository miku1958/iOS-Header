//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UICollectionLayoutGeometryGroupConfiguration-Protocol.h>

@class NSArray, NSString, UICollectionLayoutGeometryGroupItemConfiguration;

@interface UICollectionLayoutGeometryGroupConfiguration : NSObject <UICollectionLayoutGeometryGroupConfiguration>
{
    BOOL _heightSizedToContentHeight;
    BOOL _heightSizedToContainerHeight;
    BOOL _widthSizedToContentWidth;
    BOOL _widthSizedToContainerWidth;
    BOOL _alignJustified;
    BOOL _alignOrthogonallyCentered;
    BOOL _verticalGroup;
    BOOL _horizontalGroup;
    BOOL _gridGroup;
    double _height;
    double _heightSizedToContainerHeightFactor;
    long long _repeatCount;
    double _width;
    double _widthSizedToContainerWidthFactor;
    double _interitemSpacing;
    double _lineSpacing;
    long long _maximumNumberOfItems;
    UICollectionLayoutGeometryGroupItemConfiguration *_defaultItemConfiguration;
    NSArray *_customItemConfigurations;
    long long _gridColumns;
    long long _gridRows;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) BOOL alignJustified; // @synthesize alignJustified=_alignJustified;
@property (nonatomic) BOOL alignOrthogonallyCentered; // @synthesize alignOrthogonallyCentered=_alignOrthogonallyCentered;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (copy, nonatomic) NSArray *customItemConfigurations; // @synthesize customItemConfigurations=_customItemConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) UICollectionLayoutGeometryGroupItemConfiguration *defaultItemConfiguration; // @synthesize defaultItemConfiguration=_defaultItemConfiguration;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long gridColumns; // @synthesize gridColumns=_gridColumns;
@property (nonatomic, getter=isGridGroup) BOOL gridGroup; // @synthesize gridGroup=_gridGroup;
@property (nonatomic) long long gridRows; // @synthesize gridRows=_gridRows;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height; // @synthesize height=_height;
@property (nonatomic) BOOL heightSizedToContainerHeight; // @synthesize heightSizedToContainerHeight=_heightSizedToContainerHeight;
@property (nonatomic) double heightSizedToContainerHeightFactor; // @synthesize heightSizedToContainerHeightFactor=_heightSizedToContainerHeightFactor;
@property (nonatomic) BOOL heightSizedToContentHeight; // @synthesize heightSizedToContentHeight=_heightSizedToContentHeight;
@property (nonatomic, getter=isHorizontalGroup) BOOL horizontalGroup; // @synthesize horizontalGroup=_horizontalGroup;
@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (readonly, nonatomic) NSArray *itemConfigurations;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (nonatomic) long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property (nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVerticalGroup) BOOL verticalGroup; // @synthesize verticalGroup=_verticalGroup;
@property (nonatomic) double width; // @synthesize width=_width;
@property (nonatomic) BOOL widthSizedToContainerWidth; // @synthesize widthSizedToContainerWidth=_widthSizedToContainerWidth;
@property (nonatomic) double widthSizedToContainerWidthFactor; // @synthesize widthSizedToContainerWidthFactor=_widthSizedToContainerWidthFactor;
@property (nonatomic) BOOL widthSizedToContentWidth; // @synthesize widthSizedToContentWidth=_widthSizedToContentWidth;

+ (id)gridGroup;
+ (id)gridGroupWithRows:(long long)arg1 columns:(long long)arg2;
+ (id)horizontalGroup;
+ (id)verticalGroup;
- (void).cxx_destruct;
- (void)_resetGroupStyle;
- (void)_resetHeight;
- (void)_resetWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
