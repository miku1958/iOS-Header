//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString, TPDialerSoundController;
@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>
{
    BOOL _playsSounds;
    id<TPDialerKeypadDelegate> _delegate;
    TPDialerSoundController *_soundController;
}

@property (readonly, copy) NSString *debugDescription;
@property id<TPDialerKeypadDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL playsSounds; // @synthesize playsSounds=_playsSounds;
@property (strong) TPDialerSoundController *soundController; // @synthesize soundController=_soundController;
@property (readonly) Class superclass;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;
- (void).cxx_destruct;
- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;

@end

