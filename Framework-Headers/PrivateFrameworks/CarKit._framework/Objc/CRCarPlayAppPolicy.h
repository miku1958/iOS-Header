//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRCarPlayAppPolicy : NSObject
{
    BOOL _carPlaySupported;
    BOOL _canDisplayOnCarScreen;
    BOOL _launchUsingSiri;
    BOOL _launchUsingMusicUIService;
    BOOL _badgesAppIcon;
    BOOL _showsNotifications;
    NSDictionary *_siriActivationOptions;
}

@property (nonatomic) BOOL badgesAppIcon; // @synthesize badgesAppIcon=_badgesAppIcon;
@property (nonatomic) BOOL canDisplayOnCarScreen; // @synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen;
@property (nonatomic, getter=isCarPlaySupported) BOOL carPlaySupported; // @synthesize carPlaySupported=_carPlaySupported;
@property (nonatomic) BOOL launchUsingMusicUIService; // @synthesize launchUsingMusicUIService=_launchUsingMusicUIService;
@property (nonatomic) BOOL launchUsingSiri; // @synthesize launchUsingSiri=_launchUsingSiri;
@property (nonatomic) BOOL showsNotifications; // @synthesize showsNotifications=_showsNotifications;
@property (copy, nonatomic) NSDictionary *siriActivationOptions; // @synthesize siriActivationOptions=_siriActivationOptions;

- (void).cxx_destruct;
- (id)init;

@end

