//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SBIcon;

@protocol SBIconDragPreview

@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) BOOL flocked;
@property (strong, nonatomic) SBIcon *icon;
@property (nonatomic) BOOL iconAllowsLabelArea;
@property (nonatomic) double iconContentScale;
@property (nonatomic) BOOL iconIsEditing;

- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
@end
