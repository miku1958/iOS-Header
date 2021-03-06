//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorLayout-Protocol.h>

@class NSString;

@interface AVTAvatarAttributeEditorLayout : NSObject <AVTAvatarAttributeEditorLayout>
{
    BOOL _showSideGroupPicker;
    BOOL _RTL;
    double _screenScale;
    NSString *_contentSizeCategory;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (readonly, nonatomic) BOOL RTL; // @synthesize RTL=_RTL;
@property (readonly, nonatomic) struct CGRect attributesContentViewFrame;
@property (readonly, nonatomic) struct UIEdgeInsets attributesContentViewInsets;
@property (readonly, nonatomic) struct UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property (readonly, nonatomic) double avatarContainerAlpha;
@property (readonly, nonatomic) struct CGRect avatarContainerFrame;
@property (readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property (readonly, copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (readonly, nonatomic) struct CGRect groupDialContainerFrame;
@property (readonly, nonatomic) double headerMaskingViewAlpha;
@property (readonly, nonatomic) struct CGRect headerMaskingViewFrame;
@property (readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property (readonly, nonatomic) BOOL showSideGroupPicker; // @synthesize showSideGroupPicker=_showSideGroupPicker;
@property (readonly, nonatomic) struct CGRect sideGroupContainerFrame;
@property (readonly, nonatomic) unsigned long long supportedLayoutOrientation;
@property (readonly, nonatomic) struct CGRect userInfoFrame;
@property (readonly, nonatomic) double verticalRuleAlpha;
@property (readonly, nonatomic) struct CGRect verticalRuleFrame;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 screenScale:(double)arg3 RTL:(BOOL)arg4 showSideGroupPicker:(BOOL)arg5;
- (void)raiseExceptionForPropertyString:(id)arg1;

@end

