//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Collection.h>

@interface ML3Composer : ML3Collection
{
}

+ (id)allProperties;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;
- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2;
- (void)updateTrackValues:(id)arg1;

@end

