//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class MPMediaEntity, NSArray, NSString, NSTimer, SFPunchout, SearchUIButton, TLKLabel;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate>
{
    SFPunchout *_punchout;
    SearchUIButton *_playButton;
    TLKLabel *_captionLabel;
    NSString *_spotlightIdentifier;
    NSArray *_storeIdentifiers;
    NSTimer *_timer;
    MPMediaEntity *_mediaEntity;
    NSString *_universalLibraryID;
    long long _mediaEntityType;
    unsigned long long _persistentID;
}

@property (strong, nonatomic) TLKLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property (nonatomic) long long mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property (nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property (strong, nonatomic) SearchUIButton *playButton; // @synthesize playButton=_playButton;
@property (strong, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property (strong, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property (strong, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property (strong, nonatomic) NSString *universalLibraryID; // @synthesize universalLibraryID=_universalLibraryID;

+ (id)_mediaEntityForPersistentID:(id)arg1 forType:(int)arg2;
+ (id)_mediaEntityForUniversalLibraryID:(id)arg1 forType:(int)arg2;
+ (id)font;
+ (void)initialize;
+ (id)mediaEntityForAction:(id)arg1;
+ (BOOL)mediaItem:(id)arg1 matchesPersistentID:(unsigned long long)arg2 forType:(long long)arg3;
+ (BOOL)mediaItem:(id)arg1 matchesUniversalLibraryID:(id)arg2 forType:(long long)arg3;
+ (BOOL)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
- (void)buttonPressed;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)createTimerIfNeeded;
- (void)dealloc;
- (void)hide;
- (void)invalidateTimerIfNeeded;
- (BOOL)matchesNowPlayingAudioItem;
- (void)nowPlayingItemDidChange;
- (void)play;
- (void)playbackStateDidChange;
- (void)sendEngagementDidPunchout:(BOOL)arg1;
- (id)setupView;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)togglePlaybackState;
- (unsigned long long)type;
- (void)updateButtonProgressAnimated:(BOOL)arg1;
- (void)updatePlayState;
- (BOOL)updateTimerForPauseState;
- (void)updateWithRowModel:(id)arg1;

@end
