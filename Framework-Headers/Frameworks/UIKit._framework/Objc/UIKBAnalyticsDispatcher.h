//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBAnalyticsDispatcher : NSObject
{
}

+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (id)allowedValuesForType:(id)arg1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (id)currentInputMode;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint)arg4 touchUpPosition:(struct CGPoint)arg5;
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(BOOL)arg2;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint)arg2 touchPosition:(struct CGPoint)arg3;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint)arg3;
+ (void)globeKeyEducationShown:(double)arg1;
+ (void)globeKeyLongPress;
+ (void)handwritingResized:(id)arg1;
+ (id)preferredEventName:(id)arg1;
+ (void)sessionAnalyticsEnded:(id)arg1;

@end

