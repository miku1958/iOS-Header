//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, NSURL, SAUIAppPunchOut;

@interface SiriUIAttributionImage : NSObject
{
    NSString *_localResourceName;
    NSString *_localPressedResourceName;
    SAUIAppPunchOut *_localPunchOut;
    NSBundle *_localResourceBundle;
    NSURL *_remoteURL;
    NSURL *_remotePressedURL;
    SAUIAppPunchOut *_remotePunchOut;
    double _remoteScale;
    double _remotePressedScale;
    struct CGSize _logoSize;
}

@property (copy, nonatomic) NSString *localPressedResourceName; // @synthesize localPressedResourceName=_localPressedResourceName;
@property (strong, nonatomic) SAUIAppPunchOut *localPunchOut; // @synthesize localPunchOut=_localPunchOut;
@property (strong, nonatomic) NSBundle *localResourceBundle; // @synthesize localResourceBundle=_localResourceBundle;
@property (copy, nonatomic) NSString *localResourceName; // @synthesize localResourceName=_localResourceName;
@property (nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property (nonatomic) double remotePressedScale; // @synthesize remotePressedScale=_remotePressedScale;
@property (copy, nonatomic) NSURL *remotePressedURL; // @synthesize remotePressedURL=_remotePressedURL;
@property (strong, nonatomic) SAUIAppPunchOut *remotePunchOut; // @synthesize remotePunchOut=_remotePunchOut;
@property (nonatomic) double remoteScale; // @synthesize remoteScale=_remoteScale;
@property (copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;

+ (id)attributionImageFromAppPunchOut:(id)arg1;
+ (id)attributionImageFromImageResource:(id)arg1;
+ (id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;
+ (id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;
- (void).cxx_destruct;
- (void)_fetchLocalResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchRemoteResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)getLogoWithCompletion:(CDUnknownBlockType)arg1;

@end

