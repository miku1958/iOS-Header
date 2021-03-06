//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIContextualAction.h>

@class UIColor, UIImage, UIVisualEffect;

@interface UISwipeAction : UIContextualAction
{
    BOOL _canBeTriggeredBySwipe;
    BOOL _resetsSwipedRow;
    UIVisualEffect *_backgroundEffect;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property (nonatomic) BOOL canBeTriggeredBySwipe; // @synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) UIImage *icon;
@property (nonatomic) BOOL resetsSwipedRow; // @synthesize resetsSwipedRow=_resetsSwipedRow;

+ (id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)init;
- (void)resetSwipedRow;

@end

