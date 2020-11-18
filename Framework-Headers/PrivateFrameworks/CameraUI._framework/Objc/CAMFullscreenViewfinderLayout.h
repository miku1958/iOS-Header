//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMFullscreenViewfinderLayout : NSObject
{
    struct CGSize _shutterIntrinsicSize;
    struct CGRect _referenceBounds;
}

@property (nonatomic) struct CGRect referenceBounds; // @synthesize referenceBounds=_referenceBounds;
@property (nonatomic) struct CGSize shutterIntrinsicSize; // @synthesize shutterIntrinsicSize=_shutterIntrinsicSize;

- (struct CGRect)alignmentRectForShutterControl;
- (struct CGRect)frameForBottomControl:(id)arg1 betweenShutterAndLeftControl:(id)arg2;
- (struct CGRect)frameForBottomControl:(id)arg1 betweenShutterAndRightControl:(id)arg2;
- (struct CGRect)frameForBottomLeftControl:(id)arg1;
- (struct CGRect)frameForBottomRightControl:(id)arg1;
- (struct CGRect)frameForControlStatusBar;
- (struct CGRect)frameForShutterControl:(id)arg1;
- (CDStruct_d54ccef3)geometryForElapsedTimeView:(id)arg1 viewportFrame:(struct CGRect)arg2 orientation:(long long)arg3;
- (double)heightForExpandedAccessoryArea;
- (id)initWithReferenceBounds:(struct CGRect)arg1 shutterIntrinsicSize:(struct CGSize)arg2;
- (struct CGRect)viewportFrameForAspectRatio:(long long)arg1 accessoryAreaExpanded:(BOOL)arg2;
- (struct CGRect)viewportFrameForAspectRatio:(long long)arg1 usingAppDrawer:(BOOL)arg2 accessoryAreaExpanded:(BOOL)arg3;
- (struct CGSize)viewportSizeForAspectRatio:(long long)arg1;

@end
