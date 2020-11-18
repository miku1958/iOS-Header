//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _AXTableViewInternal : NSObject
{
    NSMutableDictionary *_children;
    NSMutableDictionary *_indexMap;
    NSMutableDictionary *_sectionHeaders;
    NSMutableDictionary *_sectionFooters;
    BOOL _reusableCellsEnabled;
    BOOL _searchTableViewVisible;
    BOOL _searchControllerDimmingViewVisible;
    long long _accessibleElementCount;
}

@property (nonatomic) long long accessibleElementCount; // @synthesize accessibleElementCount=_accessibleElementCount;
@property (readonly, nonatomic) NSMutableDictionary *children; // @synthesize children=_children;
@property (readonly, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
@property (nonatomic) BOOL reusableCellsEnabled; // @synthesize reusableCellsEnabled=_reusableCellsEnabled;
@property (nonatomic) BOOL searchControllerDimmingViewVisible; // @synthesize searchControllerDimmingViewVisible=_searchControllerDimmingViewVisible;
@property (nonatomic) BOOL searchTableViewVisible; // @synthesize searchTableViewVisible=_searchTableViewVisible;
@property (readonly, nonatomic) NSMutableDictionary *sectionFooters; // @synthesize sectionFooters=_sectionFooters;
@property (readonly, nonatomic) NSMutableDictionary *sectionHeaders; // @synthesize sectionHeaders=_sectionHeaders;

- (void).cxx_destruct;
- (id)init;

@end
