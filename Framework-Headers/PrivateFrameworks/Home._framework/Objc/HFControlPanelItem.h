//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAEquatable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlPanelItem : HFItem <NAEquatable>
{
    NSString *_uniqueIdentifier;
    NSSet *_controlItems;
    NSDictionary *_displayResults;
    NSDictionary *_controlItemsByUUID;
    NSDictionary *_UUIDsByControlItemPointer;
}

@property (readonly, nonatomic) NSDictionary *UUIDsByControlItemPointer; // @synthesize UUIDsByControlItemPointer=_UUIDsByControlItemPointer;
@property (readonly, copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property (readonly, nonatomic) NSDictionary *controlItemsByUUID; // @synthesize controlItemsByUUID=_controlItemsByUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *displayResults; // @synthesize displayResults=_displayResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (void).cxx_destruct;
- (id)_controlItemLatestResultsKeyedByIdentifier;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)controlItemForIdentifier:(id)arg1;
- (id)identifierForControlItem:(id)arg1;
- (id)init;
- (id)initWithControlItems:(id)arg1 displayResults:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToControlPanelItem:(id)arg1;
- (long long)sortPriority;

@end

