//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMISignpost : HMFObject <HMFLogging>
{
    NSString *_name;
    NSDate *_beginDate;
    unsigned long long _signpostIdentifier;
    NSUUID *_identifier;
}

@property (readonly) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly) unsigned long long signpostIdentifier; // @synthesize signpostIdentifier=_signpostIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)begin;
- (void)end;
- (BOOL)hasBegun;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 deferred:(BOOL)arg2;
- (id)logIdentifier;
- (BOOL)shouldSignpost;
- (id)signpostLog;

@end
