//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject
{
    HMDVendorModelEntry *_defaultEntry;
    NSMutableSet *_entries;
}

@property (strong, nonatomic) HMDVendorModelEntry *defaultEntry; // @synthesize defaultEntry=_defaultEntry;
@property (readonly, nonatomic) NSMutableSet *entries; // @synthesize entries=_entries;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)attributeDescriptions;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)lookupModel:(id)arg1;
- (id)lookupProductData:(id)arg1;

@end

