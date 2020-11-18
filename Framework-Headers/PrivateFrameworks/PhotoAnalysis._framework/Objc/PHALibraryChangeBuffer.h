//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PHALibraryChangeBuffer : NSObject
{
    NSMutableDictionary *_assetIdentifierToFlagsMap;
    NSMutableSet *_representedAssetJobScenarios;
    NSMutableArray *_momentChanges;
    NSMutableArray *_personChanges;
}

@property (strong) NSMutableDictionary *assetIdentifierToFlagsMap; // @synthesize assetIdentifierToFlagsMap=_assetIdentifierToFlagsMap;
@property (strong) NSMutableArray *momentChanges; // @synthesize momentChanges=_momentChanges;
@property (strong) NSMutableArray *personChanges; // @synthesize personChanges=_personChanges;
@property (strong) NSMutableSet *representedAssetJobScenarios; // @synthesize representedAssetJobScenarios=_representedAssetJobScenarios;
@property (readonly) unsigned long long uniqueChangeObjectCount;

- (void).cxx_destruct;
- (void)addMomentChange:(id)arg1;
- (void)addPersonChange:(id)arg1;
- (id)changedAssetIdentifiers;
- (void)drain;
- (BOOL)hasAssetChanges;
- (BOOL)hasChanges;
- (BOOL)hasMomentChanges;
- (BOOL)hasPersonChanges;
- (id)init;
- (void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2;
- (void)mergeRepresentedJobScenario:(unsigned long long)arg1;
- (BOOL)representsUserForegroundJobScenario;
- (id)snapshotAndDrain;

@end

