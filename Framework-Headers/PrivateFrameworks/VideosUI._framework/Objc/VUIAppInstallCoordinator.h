//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, VUIAccessViewController, VUIAppInstallerViewController, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIAppInstallCoordinator : NSObject
{
    WLKChannelDetails *_channelDetails;
    NSString *_contentTitle;
    VUIAppInstallerViewController *_installerViewController;
    VUIAccessViewController *_accessViewController;
    NSUUID *_uuid;
}

@property (strong, nonatomic) VUIAccessViewController *accessViewController; // @synthesize accessViewController=_accessViewController;
@property (strong, nonatomic) WLKChannelDetails *channelDetails; // @synthesize channelDetails=_channelDetails;
@property (strong, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property (strong, nonatomic) VUIAppInstallerViewController *installerViewController; // @synthesize installerViewController=_installerViewController;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (void)_installAppWithChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (id)initWithChannelDetails:(id)arg1 contentTitle:(id)arg2;
- (void)installAppWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;

@end

