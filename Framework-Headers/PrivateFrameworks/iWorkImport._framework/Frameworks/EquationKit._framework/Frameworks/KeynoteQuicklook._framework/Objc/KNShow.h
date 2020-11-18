//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class KNRecording, KNSlideTree, KNSoundtrack, KNTheme, KNUIState, TSSStylesheet;

@interface KNShow : TSPObject
{
    KNUIState *_uiState;
    KNTheme *_theme;
    KNSlideTree *_slideTree;
    TSSStylesheet *_stylesheet;
    KNRecording *_recording;
    struct CGSize _size;
    double _autoplayTransitionDelay;
    double _autoplayBuildDelay;
    double _idleTimerDelay;
    long long _mode;
    BOOL _loopPresentation;
    BOOL _idleTimerActive;
    BOOL _automaticallyPlaysUponOpen;
    BOOL _needsToUpdateThumbnails;
    BOOL _wasImportedAsPreUFF;
    BOOL _localizeDocument;
    KNSoundtrack *_soundtrack;
}

@property (nonatomic) BOOL automaticallyPlaysUponOpen;
@property (nonatomic) double autoplayBuildDelay;
@property (nonatomic) double autoplayTransitionDelay;
@property (readonly, nonatomic) BOOL hasInSyncRecording;
@property (nonatomic) BOOL idleTimerActive;
@property (nonatomic) double idleTimerDelay;
@property (nonatomic) BOOL localizeDocument; // @synthesize localizeDocument=_localizeDocument;
@property (nonatomic) BOOL loopPresentation;
@property (nonatomic) long long mode;
@property (readonly, nonatomic) BOOL needsToUpdateThumbnails; // @synthesize needsToUpdateThumbnails=_needsToUpdateThumbnails;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (strong, nonatomic) KNRecording *recording;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) BOOL slideNumbersVisible;
@property (strong, nonatomic) KNSlideTree *slideTree;
@property (strong, nonatomic) KNSoundtrack *soundtrack;
@property (readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property (strong, nonatomic) KNTheme *theme; // @synthesize theme=_theme;
@property (strong, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;
@property (readonly, nonatomic) BOOL wasImportedAsPreUFF; // @synthesize wasImportedAsPreUFF=_wasImportedAsPreUFF;

+ (unsigned long long)maximumHeight;
+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)minimumWidth;
+ (id)showWithSize:(struct CGSize)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (struct CGPoint)center;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 context:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShowArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setStylesheetForThemePreview:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (id)slideNodeAtIndex:(unsigned long long)arg1;
- (id)slideNodesAtIndexes:(id)arg1;
- (void)willModify;

@end
