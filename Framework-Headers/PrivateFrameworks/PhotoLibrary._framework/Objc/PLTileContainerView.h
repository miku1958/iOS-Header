//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;
}

- (BOOL)canBecomeFirstResponder;
- (void)clearBackReference;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 photoTileController:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end

