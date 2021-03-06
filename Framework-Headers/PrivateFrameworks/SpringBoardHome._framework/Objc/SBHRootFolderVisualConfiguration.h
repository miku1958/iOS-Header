//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHRootFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    struct SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x1LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x3LayoutMetrics;
    double _idleTextVerticalOffset;
    double _pageControlVerticalOffset;
    double _pageManagementPageCheckboxVerticalMargin;
    double _pageManagementPageCheckboxDiameter;
    double _dockViewHeight;
    double _dockBackgroundViewCornerRadius;
    struct CGSize _pageControlFrameInset;
    struct CGSize _pageControlCustomPadding;
    struct UIOffset _editModeButtonLayoutOffset;
    struct CGSize _editModeButtonSize;
    struct UIEdgeInsets _dockBackgroundViewInsets;
    struct UIEdgeInsets _dockListViewInsets;
    struct UIEdgeInsets _editModeButtonContentEdgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dockBackgroundViewCornerRadius; // @synthesize dockBackgroundViewCornerRadius=_dockBackgroundViewCornerRadius;
@property (nonatomic) struct UIEdgeInsets dockBackgroundViewInsets; // @synthesize dockBackgroundViewInsets=_dockBackgroundViewInsets;
@property (nonatomic) struct UIEdgeInsets dockListViewInsets; // @synthesize dockListViewInsets=_dockListViewInsets;
@property (nonatomic) double dockViewHeight; // @synthesize dockViewHeight=_dockViewHeight;
@property (nonatomic) struct UIEdgeInsets editModeButtonContentEdgeInsets; // @synthesize editModeButtonContentEdgeInsets=_editModeButtonContentEdgeInsets;
@property (nonatomic) struct UIOffset editModeButtonLayoutOffset; // @synthesize editModeButtonLayoutOffset=_editModeButtonLayoutOffset;
@property (nonatomic) struct CGSize editModeButtonSize; // @synthesize editModeButtonSize=_editModeButtonSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idleTextVerticalOffset; // @synthesize idleTextVerticalOffset=_idleTextVerticalOffset;
@property (nonatomic) struct CGSize pageControlCustomPadding; // @synthesize pageControlCustomPadding=_pageControlCustomPadding;
@property (nonatomic) struct CGSize pageControlFrameInset; // @synthesize pageControlFrameInset=_pageControlFrameInset;
@property (nonatomic) double pageControlVerticalOffset; // @synthesize pageControlVerticalOffset=_pageControlVerticalOffset;
@property (nonatomic) double pageManagementPageCheckboxDiameter; // @synthesize pageManagementPageCheckboxDiameter=_pageManagementPageCheckboxDiameter;
@property (nonatomic) double pageManagementPageCheckboxVerticalMargin; // @synthesize pageManagementPageCheckboxVerticalMargin=_pageManagementPageCheckboxVerticalMargin;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (struct SBRootFolderViewPageManagementLayoutMetrics)pageManagementLayoutMetricsForLayoutConfiguration:(long long)arg1;
- (void)setPageManagementLayoutMetrics:(struct SBRootFolderViewPageManagementLayoutMetrics)arg1 forLayoutConfiguration:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

