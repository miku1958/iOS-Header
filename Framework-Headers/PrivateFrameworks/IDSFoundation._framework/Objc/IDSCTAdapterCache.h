//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSCTAdapterCache : NSObject
{
    unsigned long long _dualSIMEnabled;
    unsigned long long _isAnySIMUsable;
    unsigned long long _isAnySIMInserted;
    unsigned long long _supportsIdentification;
    NSArray *_sims;
}

@property (nonatomic) unsigned long long dualSIMEnabled; // @synthesize dualSIMEnabled=_dualSIMEnabled;
@property (nonatomic) unsigned long long isAnySIMInserted; // @synthesize isAnySIMInserted=_isAnySIMInserted;
@property (nonatomic) unsigned long long isAnySIMUsable; // @synthesize isAnySIMUsable=_isAnySIMUsable;
@property (strong, nonatomic) NSArray *sims; // @synthesize sims=_sims;
@property (nonatomic) unsigned long long supportsIdentification; // @synthesize supportsIdentification=_supportsIdentification;

- (void).cxx_destruct;
- (id)debugDescription;

@end
