//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface WKApplicationProxy : NSObject
{
    NSURL *_bundleURL;
}

@property (readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;

+ (id)applicationsForContainerProxy:(id)arg1;
+ (id)gizmoAppBundleUrlWithPluginUrl:(id)arg1;
+ (id)watchAppBundleUrlWithContainerUrl:(id)arg1;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)arg1;

@end
