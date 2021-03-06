//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject
{
    BOOL _readMetadata;
    BOOL _deduplicateValues;
    NSArray *_excludedMetadataKeys;
    NSCache *_cache;
}

@property BOOL deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property (strong) NSArray *excludedMetadataKeys; // @synthesize excludedMetadataKeys=_excludedMetadataKeys;
@property BOOL readMetadata; // @synthesize readMetadata=_readMetadata;

- (void).cxx_destruct;
- (id)dataIntervalsFromManagedObjects:(id)arg1;
- (id)init;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;

@end

