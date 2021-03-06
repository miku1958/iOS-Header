//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import <GameCenterUICore/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate>
{
    NSString *_username;
    unsigned long long _passwordFieldIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *password; // @dynamic password;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (void)_updateFrameForDisplay;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

