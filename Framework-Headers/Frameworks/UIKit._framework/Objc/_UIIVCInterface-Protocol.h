//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIInputViewControllerState;
@protocol _UIIVCResponseDelegate;

@protocol _UIIVCInterface <NSObject>

@property (strong, nonatomic) id<_UIIVCResponseDelegate> responseDelegate;

- (void)_handleInputViewControllerState:(_UIInputViewControllerState *)arg1;
- (void)_tearDownRemoteService;
@end
