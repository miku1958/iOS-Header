//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSLock, NSMutableAttributedString, SCRCTargetSelectorTimer, SCROConnection;

@interface SCROBrailleClient : NSObject
{
    SCROConnection *_connection;
    NSLock *_lock;
    id _delegate;
    NSMutableAttributedString *_mainStringPending;
    NSMutableAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    SCRCTargetSelectorTimer *_deathTimer;
    BOOL _isReady;
    BOOL _needsDisplay;
    BOOL _keepConnectionAlive;
    BOOL _delegateWantsKeypresses;
    BOOL _delegateWantsReplaceTextRange;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsReconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _displayDescriptorCallbackEnabled;
}

@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDotBraille;
@property (nonatomic) BOOL wordWrapEnabled;

+ (void)logBrailleRequests:(BOOL)arg1;
+ (id)statusAttributeDotText;
- (void).cxx_destruct;
- (void)_deathTimerHandler;
- (void)_deviceConnected:(id)arg1;
- (id)_getWorkingString;
- (id)_lazyConnection;
- (void)_refreshAfterReconnect;
- (void)_registerDelegate;
- (void)_setupDeviceDetection;
- (id)aggregatedStatus;
- (BOOL)alwaysUsesNemethCodeForTechnicalText;
- (BOOL)automaticBrailleTranslationEnabled;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (BOOL)displayDescriptorCallbackEnabled;
- (void)displayIfNeeded;
- (int)displayMode;
- (id)driverConfiguration;
- (void)exitCurrentDisplayMode;
- (void)handleCallback:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isConfigured;
- (BOOL)isConnected;
- (BOOL)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (id)mainAttributedString;
- (long long)masterStatusCellIndex;
- (BOOL)needsDisplay;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (id)pendingAggregatedStatus;
- (id)pendingMainAttributedString;
- (unsigned int)persistentKeyModifiers;
- (struct _NSRange)rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)selectAllForToken:(long long)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1;
- (void)setAnnouncementString:(id)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayDescriptorCallbackEnabled:(BOOL)arg1;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setFocused:(BOOL)arg1 forToken:(long long)arg2;
- (void)setKeepConnectionAlive:(BOOL)arg1;
- (void)setKeyboardHelpIsOn:(BOOL)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setSelection:(struct _NSRange)arg1 forToken:(long long)arg2;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setVirtualStatusAlignment:(int)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (id)tokenArray;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long *)arg2 appToken:(id *)arg3 forDisplayWithToken:(int)arg4;
- (void)unselectAllForToken:(long long)arg1;
- (int)virtualStatusAlignment;

@end

