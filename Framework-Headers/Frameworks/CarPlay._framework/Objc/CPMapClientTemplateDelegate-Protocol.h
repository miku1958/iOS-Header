//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplateDelegate-Protocol.h>

@class CPNavigationAlert, NSUUID;

@protocol CPMapClientTemplateDelegate <CPTemplateDelegate>
- (void)clientNavigationAlertDidAppear:(CPNavigationAlert *)arg1;
- (void)clientNavigationAlertDidDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillAppear:(CPNavigationAlert *)arg1;
- (void)clientNavigationAlertWillDisappear:(CPNavigationAlert *)arg1 context:(unsigned long long)arg2;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanGestureBegan;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientTripAlreadyStartedException;
- (void)clientTripCanceledByExternalNavigation;
- (void)previewTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;
- (void)startTripIdentifier:(NSUUID *)arg1 usingRouteIdentifier:(NSUUID *)arg2;
@end

