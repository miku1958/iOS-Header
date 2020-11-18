//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APUnfairLock, WKWebViewConfiguration;

@interface APWebViewConfiguration : NSObject
{
    WKWebViewConfiguration *_webProcessConfiguration;
    WKWebViewConfiguration *_webProcessConfigurationWithBackgroundPriority;
    WKWebViewConfiguration *_videoConfiguration;
    WKWebViewConfiguration *_videoConfigurationWithBackgroundPriority;
    APUnfairLock *_webProcessConfigurationLock;
    APUnfairLock *_webProcessConfigurationWithBackgroundPriorityLock;
    APUnfairLock *_videoConfigurationLock;
    APUnfairLock *_videoConfigurationWithBackgroundPriorityLock;
}

@property (readonly, nonatomic) WKWebViewConfiguration *videoConfiguration;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationLock; // @synthesize videoConfigurationLock=_videoConfigurationLock;
@property (readonly, nonatomic) WKWebViewConfiguration *videoConfigurationWithBackgroundPriority;
@property (readonly, nonatomic) APUnfairLock *videoConfigurationWithBackgroundPriorityLock; // @synthesize videoConfigurationWithBackgroundPriorityLock=_videoConfigurationWithBackgroundPriorityLock;
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfiguration;
@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationLock; // @synthesize webProcessConfigurationLock=_webProcessConfigurationLock;
@property (readonly, nonatomic) WKWebViewConfiguration *webProcessConfigurationWithBackgroundPriority;
@property (readonly, nonatomic) APUnfairLock *webProcessConfigurationWithBackgroundPriorityLock; // @synthesize webProcessConfigurationWithBackgroundPriorityLock=_webProcessConfigurationWithBackgroundPriorityLock;

- (void).cxx_destruct;
- (id)_injectionScriptForResource:(id)arg1 injectionTime:(long long)arg2;
- (id)_injectionStyleForResource:(id)arg1;
- (id)_newProcessPoolWithBackgroundPriority:(BOOL)arg1;
- (id)_newSharedConfigurationWithBackgroundPriority:(BOOL)arg1;
- (id)init;

@end
