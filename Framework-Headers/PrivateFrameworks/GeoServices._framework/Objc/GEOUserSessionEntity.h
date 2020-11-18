//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface GEOUserSessionEntity : NSObject
{
    CDStruct_612aec5b _sessionID;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
}

@property (nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property double sessionCreationTime; // @synthesize sessionCreationTime=_sessionCreationTime;
@property (readonly, nonatomic) NSString *sessionEntityString;
@property CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, nonatomic) NSNumber *sessionIDHigh;
@property (readonly, nonatomic) NSString *sessionIDHighString;
@property (readonly, nonatomic) NSNumber *sessionIDLow;
@property (readonly, nonatomic) NSString *sessionIDLowString;
@property (readonly, nonatomic) NSString *sessionIDString;
@property (readonly, nonatomic) NSString *sessionUUIDString;

- (BOOL)_isValidSessionIDHighOrLowString:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSessionEntityString:(id)arg1;
- (id)initWithSessionID:(CDStruct_612aec5b)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (unsigned int)rawSequenceNumber;
- (void)updateSessionIDFromUUIDString:(id)arg1;
- (void)updateWithSessionEntityString:(id)arg1;

@end

