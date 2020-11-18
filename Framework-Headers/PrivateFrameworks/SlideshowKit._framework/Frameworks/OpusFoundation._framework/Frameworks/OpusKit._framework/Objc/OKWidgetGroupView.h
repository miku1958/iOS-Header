//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKWidgetGroupViewExports-Protocol.h>
#import <OpusKit/OKWidgetViewCollection-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, OFUIView, OKTransition;

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports>
{
    long long _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    BOOL _autoplay;
    BOOL _loop;
    BOOL _isPlaying;
    double _itemDuration;
    BOOL _isInTransition;
    struct UIEdgeInsets _itemEdgeInsets;
    OFUIView *_itemContainerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property (readonly) Class superclass;

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)_gotoIndex:(long long)arg1;
- (void)_gotoNextIndex;
- (void)_jsGotoIndex:(long long)arg1;
- (void)_jsTransitionToIndex:(long long)arg1 forward:(BOOL)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_jsTransitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_nextWidgetView;
- (void)_play;
- (void)_prepareAllForUnload:(BOOL)arg1 except:(id)arg2;
- (id)_previousWidgetView;
- (void)_reloadWidgetViews;
- (void)_stop;
- (void)_transitionToIndex:(long long)arg1 forward:(BOOL)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_transitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateDisplayedWidgetViews;
- (id)_widgetViewForIndex:(long long)arg1;
- (id)collectionItemAtIndexPath:(id)arg1;
- (id)collectionItemForName:(id)arg1;
- (unsigned long long)collectionItemsCount;
- (id)collectionItemsNames;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (struct CGRect)itemContainerRect;
- (id)layoutSettingsKeys;
- (void)layoutSubviews;
- (BOOL)prepareForDisplay:(BOOL)arg1;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload:(BOOL)arg1;
- (BOOL)prepareForWarmup:(BOOL)arg1;
- (long long)rotatedIndexForIndex:(long long)arg1;
- (void)setAntialiasing:(BOOL)arg1;
- (void)setSettingAutoplay:(BOOL)arg1;
- (void)setSettingIndex:(long long)arg1;
- (void)setSettingItemDuration:(double)arg1;
- (void)setSettingItemEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setSettingLoop:(BOOL)arg1;
- (void)setSettingSwitchActionScript:(id)arg1;
- (void)setSettingTransition:(id)arg1;
- (long long)settingIndex;
- (struct UIEdgeInsets)settingItemEdgeInsets;
- (id)settingObjectForKey:(id)arg1;
- (id)settingTransition;
- (id)valueForUndefinedKey:(id)arg1;

@end

