//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTCoreDataTransformable-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface RTLearnedTransition : NSObject <RTCoreDataTransformable>
{
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_stopDate;
    NSUUID *_visitIdentifierOrigin;
    NSUUID *_visitIdentifierDestination;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    unsigned long long _predominantMotionActivityType;
}

@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long predominantMotionActivityType; // @synthesize predominantMotionActivityType=_predominantMotionActivityType;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination; // @synthesize visitIdentifierDestination=_visitIdentifierDestination;
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin; // @synthesize visitIdentifierOrigin=_visitIdentifierOrigin;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 creationDate:(id)arg6 expirationDate:(id)arg7 predominantMotionActivityType:(unsigned long long)arg8;
- (id)initWithTransitionMO:(id)arg1;
- (id)initWithlocationOfInterestTransitionMO:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)managedObjectWithContext:(id)arg1;

@end

