//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITargetedDragPreview, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIDragLiftedItem : NSObject
{
    BOOL _sourceViewWasAdded;
    _UIPlatterView *_platterView;
    UITargetedDragPreview *_targetedPreview;
    double _liftAlpha;
}

@property (nonatomic) double liftAlpha; // @synthesize liftAlpha=_liftAlpha;
@property (strong, nonatomic) _UIPlatterView *platterView; // @synthesize platterView=_platterView;
@property (nonatomic) BOOL sourceViewWasAdded; // @synthesize sourceViewWasAdded=_sourceViewWasAdded;
@property (strong, nonatomic) UITargetedDragPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;

- (void).cxx_destruct;

@end

