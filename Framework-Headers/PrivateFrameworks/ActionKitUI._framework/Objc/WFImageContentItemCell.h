//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol WFImageContentItemCellDelegate;

__attribute__((visibility("hidden")))
@interface WFImageContentItemCell : UITableViewCell
{
    NSMapTable *_activityIndicators;
    NSMutableArray *_imageViews;
    NSMutableArray *_selectedImageViews;
    NSArray *_items;
    id<WFImageContentItemCellDelegate> _delegate;
}

@property (weak, nonatomic) id<WFImageContentItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)imageViewTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 atIndex:(unsigned long long)arg2;

@end
