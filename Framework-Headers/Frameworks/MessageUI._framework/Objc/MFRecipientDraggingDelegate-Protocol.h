//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray;

@protocol MFRecipientDraggingDelegate <NSObject>
- (void)dragEnteredAtPoint:(struct CGPoint)arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(struct CGPoint)arg1;
- (void)dropItems:(NSArray *)arg1;
@end

