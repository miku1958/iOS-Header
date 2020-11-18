//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIAccountChannelsInterface-Protocol.h>

@class VSAccountStore;

@interface WLKUIAccountChannels : IKJSObject <WLKUIAccountChannelsInterface>
{
    VSAccountStore *_accountStore;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;

- (void).cxx_destruct;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
- (void)dealloc;
- (void)fetchMSOProviderStatus:(id)arg1;
- (id)initWithAppContext:(id)arg1;

@end

