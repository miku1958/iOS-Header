//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextGestureCluster.h>

@class UIPreviewItemController;

__attribute__((visibility("hidden")))
@interface UITextGestureClusterPreview : UITextGestureCluster
{
    UIPreviewItemController *_previewItemController;
}

- (void).cxx_destruct;
- (void)_resetForLink;
- (void)detach;
- (BOOL)doesControlDelegate;
- (id)initWithView:(id)arg1;
- (BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;

@end

