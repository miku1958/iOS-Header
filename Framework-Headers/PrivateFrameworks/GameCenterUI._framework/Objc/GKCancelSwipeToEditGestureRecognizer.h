//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer
{
    GKCollectionViewCell *_currentEditingCell;
}

@property (strong, nonatomic) GKCollectionViewCell *currentEditingCell; // @synthesize currentEditingCell=_currentEditingCell;

- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

