//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CoreThemeDocument;

@interface TDHistorian : NSObject
{
    CoreThemeDocument *document;
}

- (void)_updateEntryForManagedObject:(id)arg1;
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;
- (id)colorsChangedSinceDate:(id)arg1;
- (id)facetDefinitionsChangedSinceDate:(id)arg1;
- (id)fontSizesChangedSinceDate:(id)arg1;
- (id)fontsChangedSinceDate:(id)arg1;
- (BOOL)foundDataChangesSinceDate:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;
- (id)namedElementsChangedSinceDate:(id)arg1;
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(BOOL *)arg2;
- (id)productionsWithModifiedAssets;
- (void)updateEntriesForManagedObjects:(id)arg1;

@end

