//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIInteractionProgress;

@protocol UIInteractionProgressObserver <NSObject>

@optional
- (void)interactionProgress:(UIInteractionProgress *)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(UIInteractionProgress *)arg1;
@end

