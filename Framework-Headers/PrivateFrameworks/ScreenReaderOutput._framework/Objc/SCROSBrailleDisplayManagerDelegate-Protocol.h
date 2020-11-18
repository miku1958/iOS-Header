//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSNumber, NSString, SCROBrailleKey;

@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
- (void)configurationDidChange;
- (void)handleBrailleDeletedUntranslatedText:(NSString *)arg1 speakLiterally:(BOOL)arg2;
- (void)handleBrailleDidDisplay:(NSAttributedString *)arg1;
- (void)handleBrailleDidPanLeft:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanRight:(NSNumber *)arg1 elementToken:(NSNumber *)arg2 appToken:(id)arg3;
- (void)handleBrailleDidShowNextAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(NSNumber *)arg1;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleInsertedUntranslatedText:(NSString *)arg1 speakLiterally:(BOOL)arg2;
- (void)handleBrailleKeyMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeyWillMemorize:(SCROBrailleKey *)arg1;
- (void)handleBrailleKeypress:(NSArray *)arg1;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(NSString *)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleTableFailedToLoad:(NSString *)arg1;
- (void)handleDisplayModeChanged:(NSNumber *)arg1;
- (void)handleFailedToLoadBluetoothDevice:(NSString *)arg1;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (void)handleStartEditing;
@end

