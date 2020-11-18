//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/NSCopying-Protocol.h>

@class MusicEntityViewContentArtworkDescriptor, NSArray, NSCountedSet, NSSet, NSString, UIColor;

@interface MusicEntityViewContentDescriptor : NSObject <NSCopying>
{
    NSSet *_allPropertiesToLoadAsynchronously;
    NSSet *_allPropertiesToPrefetchSynchronously;
    BOOL _hasValidAllPropertiesToLoadAsynchronously;
    NSCountedSet *_textDescriptorsBeingObserved;
    BOOL _wantsDownloadProgress;
    BOOL _wantsPopularityIndicator;
    BOOL _shouldDisableWhenUnplayable;
    BOOL _allowsDeletionWithoutEditingMode;
    BOOL _leftSeparatorInsetFollowsText;
    BOOL _shouldDisplayProminently;
    BOOL _shouldForceBottomSeparatorVisible;
    float _popularityIndicatorThreshold;
    MusicEntityViewContentArtworkDescriptor *_artworkDescriptor;
    long long _artworkVerticalAlignment;
    NSArray *_textDescriptors;
    long long _textDescriptorVerticalAlignment;
    double _minimumHeight;
    NSString *_wantsPlayButtonProperty;
    UIColor *_backgroundColor;
    UIColor *_customSelectionTintColor;
    UIColor *_customSeparatorColor;
    UIColor *_downloadProgressButtonTintColor;
    UIColor *_popularityIndicatorTintColor;
    NSString *_wantsDisclosureIndicatorProperty;
    NSString *_explicitBadgeProperty;
    NSString *_wantsAddButtonProperty;
    NSString *_wantsBuyButtonProperty;
    NSString *_storeDownloadIDProperty;
    NSString *_storeOffersProperty;
    Class _lockupViewClass;
    long long _selectionStyle;
}

@property (readonly, nonatomic) NSSet *allPropertiesToLoadAsynchronously;
@property (readonly, nonatomic) NSSet *allPropertiesToPrefetchSynchronously;
@property (nonatomic) BOOL allowsDeletionWithoutEditingMode; // @synthesize allowsDeletionWithoutEditingMode=_allowsDeletionWithoutEditingMode;
@property (strong, nonatomic) MusicEntityViewContentArtworkDescriptor *artworkDescriptor; // @synthesize artworkDescriptor=_artworkDescriptor;
@property (nonatomic) long long artworkVerticalAlignment; // @synthesize artworkVerticalAlignment=_artworkVerticalAlignment;
@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIColor *customSelectionTintColor; // @synthesize customSelectionTintColor=_customSelectionTintColor;
@property (strong, nonatomic) UIColor *customSeparatorColor; // @synthesize customSeparatorColor=_customSeparatorColor;
@property (strong, nonatomic) UIColor *downloadProgressButtonTintColor; // @synthesize downloadProgressButtonTintColor=_downloadProgressButtonTintColor;
@property (copy, nonatomic) NSString *explicitBadgeProperty; // @synthesize explicitBadgeProperty=_explicitBadgeProperty;
@property (nonatomic) BOOL leftSeparatorInsetFollowsText; // @synthesize leftSeparatorInsetFollowsText=_leftSeparatorInsetFollowsText;
@property (strong, nonatomic) Class lockupViewClass; // @synthesize lockupViewClass=_lockupViewClass;
@property (nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property (nonatomic) float popularityIndicatorThreshold; // @synthesize popularityIndicatorThreshold=_popularityIndicatorThreshold;
@property (strong, nonatomic) UIColor *popularityIndicatorTintColor; // @synthesize popularityIndicatorTintColor=_popularityIndicatorTintColor;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (nonatomic) BOOL shouldDisableWhenUnplayable; // @synthesize shouldDisableWhenUnplayable=_shouldDisableWhenUnplayable;
@property (nonatomic) BOOL shouldDisplayProminently; // @synthesize shouldDisplayProminently=_shouldDisplayProminently;
@property (nonatomic) BOOL shouldForceBottomSeparatorVisible; // @synthesize shouldForceBottomSeparatorVisible=_shouldForceBottomSeparatorVisible;
@property (copy, nonatomic) NSString *storeDownloadIDProperty; // @synthesize storeDownloadIDProperty=_storeDownloadIDProperty;
@property (copy, nonatomic) NSString *storeOffersProperty; // @synthesize storeOffersProperty=_storeOffersProperty;
@property (nonatomic) long long textDescriptorVerticalAlignment; // @synthesize textDescriptorVerticalAlignment=_textDescriptorVerticalAlignment;
@property (copy, nonatomic) NSArray *textDescriptors; // @synthesize textDescriptors=_textDescriptors;
@property (copy, nonatomic) NSString *wantsAddButtonProperty; // @synthesize wantsAddButtonProperty=_wantsAddButtonProperty;
@property (copy, nonatomic) NSString *wantsBuyButtonProperty; // @synthesize wantsBuyButtonProperty=_wantsBuyButtonProperty;
@property (copy, nonatomic) NSString *wantsDisclosureIndicatorProperty; // @synthesize wantsDisclosureIndicatorProperty=_wantsDisclosureIndicatorProperty;
@property (nonatomic) BOOL wantsDownloadProgress; // @synthesize wantsDownloadProgress=_wantsDownloadProgress;
@property (copy, nonatomic) NSString *wantsPlayButtonProperty; // @synthesize wantsPlayButtonProperty=_wantsPlayButtonProperty;
@property (nonatomic) BOOL wantsPopularityIndicator; // @synthesize wantsPopularityIndicator=_wantsPopularityIndicator;

+ (Class)tableViewCellClass;
+ (id)tableViewCellReuseIdentifier;
+ (Class)tableViewSectionHeaderClass;
+ (id)tableViewSectionHeaderReuseIdentifier;
- (void).cxx_destruct;
- (void)_handleArtworkDescriptorDidInvalidateNotification:(id)arg1;
- (void)_handleTextDescriptorDidInvalidateNotification:(id)arg1;
- (void)_invalidateAllPropertiesToLoadAsynchronously;
- (void)_invalidateAllPropertiesToPrefetchSynchronously;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)textDescriptorForTag:(long long)arg1;
- (void)updateTextDescriptorsForPreferredContentSizeChange;
- (void)updateTextDescriptorsWithDisplayScale:(double)arg1;
- (void)updateTextDescriptorsWithTintColor:(id)arg1;
- (void)willAddTextDescriptor:(id)arg1;
- (void)willRemoveTextDescriptor:(id)arg1;

@end

