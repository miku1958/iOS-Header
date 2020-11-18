//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class _UIBeamPointerSettings, _UIButtonBehaviorSettings, _UIFreeformPointerSettings, _UILinkPointerSettings, _UINavigationAndToolbarBehaviorSettings, _UIPointerEffectSizeRuleSettings, _UIPointerHighlightEffectSettings, _UIPointerHoverEffectSettings, _UIPointerLiftEffectSettings, _UIPointerSBAppIconEffectSettings, _UIPointerTextBehaviorSettings, _UISearchBarBehaviorSettings, _UITabBarBehaviorSettings;

__attribute__((visibility("hidden")))
@interface _UIPointerSettings : PTSettings
{
    BOOL _showRegions;
    BOOL _showEffectPlatter;
    _UIPointerEffectSizeRuleSettings *_sizeRuleSettings;
    _UIFreeformPointerSettings *_freeformPointerSettings;
    _UIBeamPointerSettings *_beamSettings;
    _UILinkPointerSettings *_linkPointerSettings;
    _UIPointerHighlightEffectSettings *_highlightEffectSettings;
    _UIPointerLiftEffectSettings *_liftEffectSettings;
    _UIPointerHoverEffectSettings *_hoverEffectSettings;
    _UIPointerSBAppIconEffectSettings *_SBAppIconEffectSettings;
    _UIPointerTextBehaviorSettings *_textSettings;
    _UIButtonBehaviorSettings *_buttonSettings;
    _UINavigationAndToolbarBehaviorSettings *_navigationAndToolbarSettings;
    _UITabBarBehaviorSettings *_tabBarSettings;
    _UISearchBarBehaviorSettings *_searchBarSettings;
}

@property (strong, nonatomic) _UIPointerSBAppIconEffectSettings *SBAppIconEffectSettings; // @synthesize SBAppIconEffectSettings=_SBAppIconEffectSettings;
@property (strong, nonatomic) _UIBeamPointerSettings *beamSettings; // @synthesize beamSettings=_beamSettings;
@property (strong, nonatomic) _UIButtonBehaviorSettings *buttonSettings; // @synthesize buttonSettings=_buttonSettings;
@property (strong, nonatomic) _UIFreeformPointerSettings *freeformPointerSettings; // @synthesize freeformPointerSettings=_freeformPointerSettings;
@property (strong, nonatomic) _UIPointerHighlightEffectSettings *highlightEffectSettings; // @synthesize highlightEffectSettings=_highlightEffectSettings;
@property (strong, nonatomic) _UIPointerHoverEffectSettings *hoverEffectSettings; // @synthesize hoverEffectSettings=_hoverEffectSettings;
@property (strong, nonatomic) _UIPointerLiftEffectSettings *liftEffectSettings; // @synthesize liftEffectSettings=_liftEffectSettings;
@property (strong, nonatomic) _UILinkPointerSettings *linkPointerSettings; // @synthesize linkPointerSettings=_linkPointerSettings;
@property (strong, nonatomic) _UINavigationAndToolbarBehaviorSettings *navigationAndToolbarSettings; // @synthesize navigationAndToolbarSettings=_navigationAndToolbarSettings;
@property (strong, nonatomic) _UISearchBarBehaviorSettings *searchBarSettings; // @synthesize searchBarSettings=_searchBarSettings;
@property (nonatomic) BOOL showEffectPlatter; // @synthesize showEffectPlatter=_showEffectPlatter;
@property (nonatomic) BOOL showRegions; // @synthesize showRegions=_showRegions;
@property (strong, nonatomic) _UIPointerEffectSizeRuleSettings *sizeRuleSettings; // @synthesize sizeRuleSettings=_sizeRuleSettings;
@property (strong, nonatomic) _UITabBarBehaviorSettings *tabBarSettings; // @synthesize tabBarSettings=_tabBarSettings;
@property (strong, nonatomic) _UIPointerTextBehaviorSettings *textSettings; // @synthesize textSettings=_textSettings;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

