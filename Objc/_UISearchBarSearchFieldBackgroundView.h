//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextFieldRoundedRectBackgroundViewNeue.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue
{
    BOOL _showingTouch;
    BOOL _backgroundContainer;
    long long _barStyle;
    unsigned long long _searchBarStyle;
}

@property (nonatomic) BOOL backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;
@property (nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property (nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property (nonatomic) BOOL showingTouch; // @synthesize showingTouch=_showingTouch;

- (id)_automaticFillColorForActive:(BOOL)arg1;
- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3;
- (void)setCornerRadius:(double)arg1;

@end

