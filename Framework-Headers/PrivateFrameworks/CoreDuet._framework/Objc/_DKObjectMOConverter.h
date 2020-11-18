//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface _DKObjectMOConverter : NSObject
{
    BOOL _readMetadata;
    BOOL _deduplicateValues;
    NSCache *_cache;
}

@property (strong) NSCache *cache; // @synthesize cache=_cache;
@property BOOL deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property BOOL readMetadata; // @synthesize readMetadata=_readMetadata;

- (void).cxx_destruct;
- (BOOL)copyObject:(id)arg1 intoManagedObject:(id)arg2;
- (id)dataIntervalsFromManagedObjects:(id)arg1;
- (id)init;
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)objectsFromManagedObjects:(id)arg1;

@end

