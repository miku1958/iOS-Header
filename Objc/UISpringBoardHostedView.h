//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface UISpringBoardHostedView : UIView
{
    NSString *_remoteViewIdentifier;
    UIWindow *_remoteWindow;
    BOOL _remoteViewOpaque;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)registerWithIdentifier:(id)arg1 andController:(id)arg2;
- (id)remoteViewIdentifier;
- (void)setRemoteViewOpaque:(BOOL)arg1;
- (void)unregister;

@end

