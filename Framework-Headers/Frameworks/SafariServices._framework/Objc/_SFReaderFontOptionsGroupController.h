//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSettingsAlertOptionsGroupController-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, SFReaderContext;

__attribute__((visibility("hidden")))
@interface _SFReaderFontOptionsGroupController : NSObject <_SFSettingsAlertOptionsGroupController>
{
    double _fontSize;
    NSMutableDictionary *_fontToItemDictionary;
    NSObject<OS_dispatch_queue> *_fontInstallationStatusQueue;
    id<SFReaderContext> _readerContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SFReaderContext> readerContext; // @synthesize readerContext=_readerContext;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *values;

- (void).cxx_destruct;
- (id)_attributedStringForReaderFont:(id)arg1;
- (id)_downloadAccessoryForNotification:(id)arg1;
- (void)_fontDownloadDidBegin:(id)arg1;
- (void)_fontDownloadDidFail:(id)arg1;
- (void)_fontDownloadDidFinish:(id)arg1;
- (void)_fontDownloadProgressDidChange:(id)arg1;
- (id)_fontForFontNotification:(id)arg1;
- (BOOL)_fontIsImmediatelyAvailable:(id)arg1;
- (id)_itemForNotification:(id)arg1;
- (id)attributedStringForValue:(id)arg1;
- (id)initWithReaderContext:(id)arg1;
- (BOOL)isSelectedValue:(id)arg1;
- (void)prepareItem:(id)arg1 forValue:(id)arg2;
- (void)setSelectedValue:(id)arg1;
- (id)textStyleForValue:(id)arg1;

@end
