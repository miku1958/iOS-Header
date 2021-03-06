//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDiffableDataSourceSectionSnapshot, NSOrderedCollectionDifference;

@interface _UIDiffableDataSourceSectionTransaction : NSObject
{
    id _sectionIdentifier;
    NSDiffableDataSourceSectionSnapshot *_initialSnapshot;
    NSDiffableDataSourceSectionSnapshot *_finalSnapshot;
    NSOrderedCollectionDifference *_difference;
}

@property (readonly, nonatomic) NSOrderedCollectionDifference *difference; // @synthesize difference=_difference;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property (readonly, nonatomic) id sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSectionIdentifier:(id)arg1 initialSnapshot:(id)arg2 finalSnapshot:(id)arg3 difference:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

