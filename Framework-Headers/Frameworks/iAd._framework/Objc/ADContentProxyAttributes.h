//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface ADContentProxyAttributes : NSObject
{
    NSURL *_contentProxyURL;
    NSURL *_contentProxyURLConnect;
    long long _proxyType;
    NSString *_configVersion;
}

@property (copy, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property (copy, nonatomic) NSURL *contentProxyURL; // @synthesize contentProxyURL=_contentProxyURL;
@property (copy, nonatomic) NSURL *contentProxyURLConnect; // @synthesize contentProxyURLConnect=_contentProxyURLConnect;
@property (nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;

+ (id)sharedInstance;
- (void)configVersionDidChange:(id)arg1;
- (void)contentProxyURLConnectDidChange:(id)arg1;
- (void)contentProxyURLDidChange:(id)arg1;
- (void)dealloc;
- (void)proxyTypeDidChange:(long long)arg1;

@end

