//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUChangeDetails, MPUPropertySet, MPUSectionedCollection;

@interface MPUModelResponse : NSObject
{
    BOOL _valid;
    MPUPropertySet *_deferredSectionProperties;
    MPUPropertySet *_deferredItemProperties;
    MPUChangeDetails *_changeDetails;
    MPUSectionedCollection *_results;
    MPUPropertySet *_requestedSectionProperties;
    MPUPropertySet *_requestedItemProperties;
}

@property (strong, nonatomic) MPUChangeDetails *changeDetails; // @synthesize changeDetails=_changeDetails;
@property (strong, nonatomic) MPUPropertySet *deferredItemProperties; // @synthesize deferredItemProperties=_deferredItemProperties;
@property (strong, nonatomic) MPUPropertySet *deferredSectionProperties; // @synthesize deferredSectionProperties=_deferredSectionProperties;
@property (strong, nonatomic) MPUPropertySet *requestedItemProperties; // @synthesize requestedItemProperties=_requestedItemProperties;
@property (strong, nonatomic) MPUPropertySet *requestedSectionProperties; // @synthesize requestedSectionProperties=_requestedSectionProperties;
@property (copy, nonatomic) MPUSectionedCollection *results; // @synthesize results=_results;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)debugDescription;
- (id)description;
- (id)init;

@end

