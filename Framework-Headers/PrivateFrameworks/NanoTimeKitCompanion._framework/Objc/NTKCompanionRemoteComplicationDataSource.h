//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

#import <NanoTimeKitCompanion/NTKComplicationCollectionObserver-Protocol.h>

@class CLKComplicationTemplate, NSString, NTKCompanionComplicationDataSource, NTKComplicationCollection;

@interface NTKCompanionRemoteComplicationDataSource : NTKComplicationDataSource <NTKComplicationCollectionObserver>
{
    CLKComplicationTemplate *_complicationTemplate;
    NTKComplicationCollection *_complicationCollection;
    NTKCompanionComplicationDataSource *_stocksDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_invalidate;
- (void)_loadCollection;
- (BOOL)_remoteIsCompanion;
- (id)_templateFromApp:(id)arg1;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;

@end

