//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLOHomeKitConfiguration : NSObject
{
    unsigned int _numHomes;
    unsigned int _numAccessories;
    unsigned int _numServices;
    unsigned int _numUsers;
    unsigned int _numTriggers;
    unsigned int _numRooms;
    unsigned int _numZones;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _databaseSize;
}

@property unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
@property unsigned int numAccessoryServiceGroups; // @synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups;
@property unsigned int numHomes; // @synthesize numHomes=_numHomes;
@property unsigned int numRooms; // @synthesize numRooms=_numRooms;
@property unsigned int numServices; // @synthesize numServices=_numServices;
@property unsigned int numTriggers; // @synthesize numTriggers=_numTriggers;
@property unsigned int numUsers; // @synthesize numUsers=_numUsers;
@property unsigned int numZones; // @synthesize numZones=_numZones;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

