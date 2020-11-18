//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSString;

@interface PGMeaningInterestingnessCriteria : NSObject <PGMeaningCriteria>
{
    BOOL _mustBeInteresting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL mustBeInteresting; // @synthesize mustBeInteresting=_mustBeInteresting;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;
- (BOOL)isValid;
- (BOOL)passesForMomentNode:(id)arg1;

@end
