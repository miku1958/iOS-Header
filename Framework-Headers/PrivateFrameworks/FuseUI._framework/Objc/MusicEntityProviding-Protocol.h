//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/SKUIEntityProviding-Protocol.h>

@class MusicEntityValueContext, MusicSectionEntityValueContext, NSIndexPath, NSSet, SKUIIndexBarEntry;
@protocol IKEntityValueProviding;

@protocol MusicEntityProviding <SKUIEntityProviding>
- (void)configureEntityValueContextOutput:(MusicEntityValueContext *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(MusicEntityValueContext *)arg1;
- (void)configureSectionEntityValueContextOutput:(MusicSectionEntityValueContext *)arg1 forIndex:(unsigned long long)arg2;
- (id<IKEntityValueProviding>)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (BOOL)hasEntities;
- (SKUIIndexBarEntry *)indexBarEntryAtIndex:(unsigned long long)arg1;
- (NSIndexPath *)indexPathForEntityValueContext:(MusicEntityValueContext *)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@optional
- (NSSet *)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(MusicEntityValueContext *)arg1;
- (BOOL)hasEntitiesNotInLibrary;
- (BOOL)hasExplicitContent;
- (BOOL)hasMultipleEntitiesIncludingStoreContent;
- (BOOL)setEditing:(BOOL)arg1;
@end

