//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface EKDirectorySearchQuery : NSObject
{
    BOOL _findGroups;
    BOOL _findLocations;
    BOOL _findResources;
    BOOL _findUsers;
    NSSet *_terms;
    unsigned long long _resultLimit;
}

@property (nonatomic) BOOL findGroups; // @synthesize findGroups=_findGroups;
@property (nonatomic) BOOL findLocations; // @synthesize findLocations=_findLocations;
@property (nonatomic) BOOL findResources; // @synthesize findResources=_findResources;
@property (nonatomic) BOOL findUsers; // @synthesize findUsers=_findUsers;
@property (nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property (strong, nonatomic) NSSet *terms; // @synthesize terms=_terms;

- (void).cxx_destruct;

@end

