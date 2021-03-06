//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDCoreAnalyticsLogging-Protocol.h>

@class NSString;

@interface HMDFamiliarFacesBulletinLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>
{
    BOOL _doorbellPressed;
    long long _numberOfKnownPersons;
    long long _numberOfUnknownPersons;
    NSString *_bulletinReason;
    double _secondsFromDoorbellToFaceClassification;
}

@property (readonly, copy) NSString *bulletinReason; // @synthesize bulletinReason=_bulletinReason;
@property (readonly) BOOL doorbellPressed; // @synthesize doorbellPressed=_doorbellPressed;
@property (readonly) long long numberOfKnownPersons; // @synthesize numberOfKnownPersons=_numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons; // @synthesize numberOfUnknownPersons=_numberOfUnknownPersons;
@property (readonly) double secondsFromDoorbellToFaceClassification; // @synthesize secondsFromDoorbellToFaceClassification=_secondsFromDoorbellToFaceClassification;

+ (id)identifier;
- (void).cxx_destruct;
- (id)eventName;
- (id)initWithNumberOfKnownPersons:(long long)arg1 numberOfUnknownPersons:(long long)arg2 bulletinReason:(id)arg3 doorbellPressed:(BOOL)arg4 secondsFromDoorbellToFaceClassification:(double)arg5;
- (id)serializedEvent;

@end

