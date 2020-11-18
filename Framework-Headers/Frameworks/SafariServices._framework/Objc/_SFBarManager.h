//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol _SFBarManagerDelegate;

@interface _SFBarManager : NSObject
{
    NSMapTable *_barToRegistrationMap;
    BOOL _itemEnabledMap[7];
    BOOL _bookmarksItemSelected;
    id<_SFBarManagerDelegate> _delegate;
}

@property (nonatomic, getter=isBookmarksItemSelected) BOOL bookmarksItemSelected; // @synthesize bookmarksItemSelected=_bookmarksItemSelected;
@property (weak, nonatomic) id<_SFBarManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_updateAllRegistrations;
- (void)_updateRegistration:(id)arg1;
- (BOOL)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (id)init;
- (BOOL)isBarItemEnabled:(long long)arg1;
- (void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3;
- (void)setBarItem:(long long)arg1 enabled:(BOOL)arg2;
- (unsigned long long)test_numberOfRegistrations;
- (id)test_registrationForBar:(id)arg1;

@end

