//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStatusBar.h>

@protocol MusicNowPlayingAtmosphericStatusBarDelegate;

@interface MusicStatusBar : UIStatusBar
{
    id<MusicNowPlayingAtmosphericStatusBarDelegate> __music_statusBarDelegate;
}

@property (weak, nonatomic) id<MusicNowPlayingAtmosphericStatusBarDelegate> _music_statusBarDelegate; // @synthesize _music_statusBarDelegate=__music_statusBarDelegate;

- (void).cxx_destruct;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;

@end
