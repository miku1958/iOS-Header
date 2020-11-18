//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/CCUIControlCenterObserver-Protocol.h>

@protocol CCUIControlCenterPageContentViewControllerDelegate;

@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>

@property (readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property (weak, nonatomic) id<CCUIControlCenterPageContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsVisible;


@optional
- (void)controlCenterDidScrollToThisPage:(BOOL)arg1;
- (BOOL)dismissModalFullScreenIfNeeded;
@end

