//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/UIFocusEnvironment-Protocol.h>

@class UIFocusMovementHint;

@protocol UIFocusItem <UIFocusEnvironment>

@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect frame;


@optional
- (void)didHintFocusMovement:(UIFocusMovementHint *)arg1;
@end

