//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationResult-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPSectionedIdentifierListEncodableNextEntriesProviding-Protocol.h>

@class MPSectionedIdentifierListEntryPositionKey, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListEntry : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult>
{
    NSMutableArray *_nextEntries;
    BOOL _dataSourceRemoved;
    MPSectionedIdentifierListEntryPositionKey *_positionKey;
    NSString *_sectionIdentifier;
    NSString *_hostedSectionIdentifier;
    MPSectionedIdentifierListEntry *_previousEntry;
    long long _branchDepth;
}

@property (nonatomic) long long branchDepth; // @synthesize branchDepth=_branchDepth;
@property (readonly, nonatomic, getter=isDataSourceRemoved) BOOL dataSourceRemoved; // @synthesize dataSourceRemoved=_dataSourceRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostedSectionIdentifier; // @synthesize hostedSectionIdentifier=_hostedSectionIdentifier;
@property (readonly, nonatomic) NSArray *nextEntries; // @synthesize nextEntries=_nextEntries;
@property (readonly, nonatomic) MPSectionedIdentifierListEntryPositionKey *positionKey; // @synthesize positionKey=_positionKey;
@property (weak, nonatomic) MPSectionedIdentifierListEntry *previousEntry; // @synthesize previousEntry=_previousEntry;
@property (readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addBranch:(id)arg1 forceBranchDepthIncrease:(BOOL)arg2;
- (void)addNextEntry:(id)arg1;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (id)itemResult;
- (void)prepareForDealloc;
- (void)setDataSourceRemoved;
- (id)trackingEntryResult;

@end

