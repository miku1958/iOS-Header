//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKGlyphView;

@protocol PKGlyphViewDelegate <NSObject>

@optional
- (void)glyphView:(PKGlyphView *)arg1 revealingCheckmark:(BOOL)arg2;
- (void)glyphView:(PKGlyphView *)arg1 transitioningToState:(long long)arg2;
- (void)glyphViewUserIntentEdgeDidChange:(PKGlyphView *)arg1;
@end

