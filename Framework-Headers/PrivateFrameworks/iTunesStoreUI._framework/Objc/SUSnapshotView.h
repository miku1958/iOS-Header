//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SUSnapshotView : UIView
{
    UIView *_imageView;
}

- (void)_takeCGSnapshotOfView:(id)arg1;
- (void)_takeIOSurfaceSnapshotOfView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2;

@end

