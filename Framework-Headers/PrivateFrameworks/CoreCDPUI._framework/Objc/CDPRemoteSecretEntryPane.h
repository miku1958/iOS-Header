//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class CDPDevice, UIButton;
@protocol CDPRemoteSecretEntryPaneDelegate;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane
{
    UIButton *_footerButton;
    id<CDPRemoteSecretEntryPaneDelegate> _paneDelegate;
    unsigned long long _escapeOffer;
    unsigned long long _remoteSecretType;
    CDPDevice *_device;
}

@property (strong, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property (nonatomic) unsigned long long escapeOffer; // @synthesize escapeOffer=_escapeOffer;
@property (weak, nonatomic) id<CDPRemoteSecretEntryPaneDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
@property (nonatomic) unsigned long long remoteSecretType; // @synthesize remoteSecretType=_remoteSecretType;

- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (void)footerTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;

@end
