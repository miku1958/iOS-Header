//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>

@class NSString;
@protocol MusicEntityProviding, MusicEntityValueProviding;

@interface MusicCopyrightEntityProvider : NSObject <MusicEntityProviding>
{
    id<MusicEntityValueProviding> _copyrightEntityValueProvider;
    BOOL _hasCopyright;
    BOOL _isContainerCopyEntityValueProvider;
    id<MusicEntityProviding> _sourceEntityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<MusicEntityProviding> sourceEntityProvider; // @synthesize sourceEntityProvider=_sourceEntityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadHasCopyrightAllowingInvalidation:(BOOL)arg1;
- (void)_sourceEntityProviderDidInvalidateNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithSourceEntityProvider:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end
