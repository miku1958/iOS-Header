//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIInputViewSetPlacement, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlideContext : NSObject
{
    UIView *_snapshot;
    UIInputViewSetPlacement *_endPlacement;
    struct CGRect _snapshotEndFrame;
}

@property (strong, nonatomic) UIInputViewSetPlacement *endPlacement; // @synthesize endPlacement=_endPlacement;
@property (strong, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;
@property (nonatomic) struct CGRect snapshotEndFrame; // @synthesize snapshotEndFrame=_snapshotEndFrame;

- (void)dealloc;

@end

