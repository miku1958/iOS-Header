//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, _UIFocusMapSearchInfo, _UIFocusMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotDebugInfo : NSObject
{
    UIImage *_image;
    _UIFocusMapSnapshot *_snapshot;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    struct CGPoint _imageAnchorPoint;
}

@property (readonly, weak, nonatomic) _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) struct CGPoint imageAnchorPoint; // @synthesize imageAnchorPoint=_imageAnchorPoint;
@property (readonly, nonatomic) _UIFocusMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;
- (void).cxx_destruct;
- (id)_drawImage;
- (struct CGRect)_rectContainingAllFocusRegions;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;

@end

