//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject
{
    BOOL _invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

@property (nonatomic) BOOL invalidatedSpecifiers; // @synthesize invalidatedSpecifiers=_invalidatedSpecifiers;
@property (strong, nonatomic) NSMutableSet *searchEntries; // @synthesize searchEntries=_searchEntries;
@property (strong, nonatomic) PSSpecifierUpdates *specifierUpdates; // @synthesize specifierUpdates=_specifierUpdates;

+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;
+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;
- (void).cxx_destruct;
- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(BOOL)arg3;

@end

