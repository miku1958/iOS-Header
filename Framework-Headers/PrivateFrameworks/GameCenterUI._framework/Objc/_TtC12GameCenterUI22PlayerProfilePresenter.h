//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC12GameCenterUI17NicknamePresenter, _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI22PlayerProfilePresenter : NSObject
{
    MISSING_TYPE *playerId;
    MISSING_TYPE *objectGraph;
    MISSING_TYPE *requiredDataPresenter;
    MISSING_TYPE *authenticationPresenter;
    MISSING_TYPE *nicknamePresenter;
    MISSING_TYPE *nicknameUpdatedSubscription;
    MISSING_TYPE *isUpdating;
    MISSING_TYPE *sections;
    MISSING_TYPE *requiredData;
    MISSING_TYPE *snapshot;
    MISSING_TYPE *onApplySnapshot;
    MISSING_TYPE *onUpdatePhaseChange;
    MISSING_TYPE *onShowAvatarEditor;
    MISSING_TYPE *onNicknameChanged;
}

@property (nonatomic, readonly) _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter *authenticationPresenter; // @synthesize authenticationPresenter;
@property (nonatomic, readonly) BOOL isSignedIn;
@property (nonatomic) BOOL isUpdating; // @synthesize isUpdating;
@property (nonatomic, strong) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter; // @synthesize nicknamePresenter;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)didSignOut;
- (id)init;
- (id)initWithPlayerId:(id)arg1;
- (void)setAllowsNearByMultiplayerInvites:(BOOL)arg1;
- (void)showAvatarEditor;
- (void)signIntoGameCenter;
- (void)updateSnapshot;

@end

