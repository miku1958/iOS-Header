//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLPlatter-Protocol.h>

@class NSArray, UIControl, UIScrollView;

@protocol PLExpandedPlatter <PLPlatter>

@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property (nonatomic) BOOL clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;
@property (nonatomic) struct CGSize customContentSize;
@property (readonly, nonatomic) UIControl *dismissControl;
@property (readonly, nonatomic) struct UIEdgeInsets dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (strong, nonatomic) NSArray *interfaceActions;
@property (readonly, nonatomic) UIScrollView *scrollView;

- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)contentSizeExcludingActions;
- (struct CGRect)frameForPlatterFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)minimumScrollViewContentInsets;
- (struct CGRect)platterFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)scrollViewFrame;
- (struct CGSize)sizeExcludingActions;
@end
