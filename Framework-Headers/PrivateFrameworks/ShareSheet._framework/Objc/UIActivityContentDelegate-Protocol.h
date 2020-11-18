//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, NSUUID;

@protocol UIActivityContentDelegate <NSObject>
- (void)_editActionsTapped;
- (NSString *)_titleForActivity:(NSString *)arg1;
- (void)closeButtonTapped;
- (NSURL *)fallbackURLForLinkPresentation;
- (void)nextButtonTappedWithPeopleProxies:(NSArray *)arg1 shareProxies:(NSArray *)arg2 actionProxies:(NSArray *)arg3 nearbyCountSlotID:(NSNumber *)arg4;
- (void)optionsButtonTapped;
- (NSArray *)requestMetadataValues;
- (void)selectedActionWithIdentifier:(NSUUID *)arg1;
- (void)selectedAppWithIdentifier:(NSUUID *)arg1;
- (void)selectedPersonWithIdentifier:(NSUUID *)arg1;
- (void)showScreenTimeRestrictedAlert;
@end
