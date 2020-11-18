//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIAbstractEntityProviderViewElement.h>

#import <StoreKitUI/SKUIEntityProviding-Protocol.h>

@class NSArray, NSMapTable, NSString, RadioModel;

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding>
{
    BOOL _hasValidStations;
    long long _countLimit;
    long long _radioEntityProviderType;
    RadioModel *_radioModel;
    NSArray *_stations;
    NSMapTable *_stationToStationEntityValueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entityValueProviderForStation:(id)arg1;
- (void)_invalidateWithContext:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (id)_stations;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (id)sectionEntityValueProviderAtIndex:(long long)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end

