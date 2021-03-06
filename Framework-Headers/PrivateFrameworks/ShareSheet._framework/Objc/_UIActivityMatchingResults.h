//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, _UIActivityMatchingContext;

@interface _UIActivityMatchingResults : NSObject
{
    NSMutableSet *_excludedActivityTypesSet;
    _UIActivityMatchingContext *_context;
    NSArray *_orderedActivities;
}

@property (readonly, nonatomic) _UIActivityMatchingContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) NSArray *excludedActivityTypes;
@property (strong, nonatomic) NSArray *orderedActivities; // @synthesize orderedActivities=_orderedActivities;

- (void).cxx_destruct;
- (void)addExcludedActivityTypes:(id)arg1;
- (id)initWithActivityMatchingContext:(id)arg1;

@end

