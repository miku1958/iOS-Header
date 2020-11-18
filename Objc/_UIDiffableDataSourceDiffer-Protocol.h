//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSHashTable, _UIIdentifierDiffer;
@protocol _UIDiffableDataSourceState;

@protocol _UIDiffableDataSourceDiffer

@property (readonly, nonatomic) NSHashTable *affectedSectionIdentifiers;
@property (readonly, nonatomic) id<_UIDiffableDataSourceState> afterDataSourceState;
@property (readonly, nonatomic) id<_UIDiffableDataSourceState> beforeDataSourceState;
@property (readonly, nonatomic) BOOL hasDifferences;
@property (readonly, nonatomic) _UIIdentifierDiffer *itemIdentifierDiffer;
@property (readonly, nonatomic) _UIIdentifierDiffer *sectionIdentifierDiffer;
@property (readonly, nonatomic) BOOL snapshotsAreRelated;
@property (readonly, nonatomic) NSArray *updates;

@end

