//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIScenePresenter, _UIScenePresenterOwner;

@protocol _UIScenePresenterOwnerDelegate <NSObject>
- (void)owner:(_UIScenePresenterOwner *)arg1 willPrioritizePresenter:(_UIScenePresenter *)arg2 deactivatePresenter:(_UIScenePresenter *)arg3;
- (void)ownerDidInvalidateLastPresenter:(_UIScenePresenterOwner *)arg1;
@end
