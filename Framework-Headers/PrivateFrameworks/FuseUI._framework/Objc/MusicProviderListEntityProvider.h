//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicEntityProviding-Protocol.h>

@class MusicClientContext, NSArray, NSString;

@interface MusicProviderListEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding>
{
    MusicClientContext *_clientContext;
    NSArray *_entityProviderList;
}

@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entityProviderList; // @synthesize entityProviderList=_entityProviderList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_getEntityProvider:(id *)arg1 forIndexBarEntryIndex:(unsigned long long)arg2 returningLocalIndexBarEntryIndex:(unsigned long long *)arg3;
- (id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)getEntityProvider:(id *)arg1 forSectionIndex:(unsigned long long)arg2 returningLocalSectionIndex:(unsigned long long *)arg3;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithEntityProviderList:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (BOOL)setEditing:(BOOL)arg1;

@end

