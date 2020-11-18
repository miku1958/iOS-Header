//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EKEvent;

__attribute__((visibility("hidden")))
@interface EKEventDetailCell : UITableViewCell
{
    EKEvent *_event;
    BOOL _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (readonly, nonatomic) BOOL isEditable;

+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;
- (void).cxx_destruct;
- (double)detailsLeftInset;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (BOOL)needsLayoutForWidth:(double)arg1 position:(int)arg2;
- (void)setEvent:(id)arg1;
- (void)sizeToFit;
- (BOOL)update;

@end

