//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask
{
    NSArray *_emailAddresses;
    BOOL _retrieveCertificates;
    BOOL _retrieveAvailability;
    NSDate *_startTime;
    NSDate *_endTime;
}

@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (nonatomic) BOOL retrieveAvailability; // @synthesize retrieveAvailability=_retrieveAvailability;
@property (nonatomic) BOOL retrieveCertificates; // @synthesize retrieveCertificates=_retrieveCertificates;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;

- (void).cxx_destruct;
- (id)_roundDownTo30MinuteBoundary:(id)arg1;
- (id)_roundUpTo30MinuteBoundary:(id)arg1;
- (long long)availabilityStatusForExchangeStatus:(int)arg1;
- (long long)certStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)initForCertificatesWithEmailAddresses:(id)arg1;
- (id)initFreeBusyQueryWithStartDate:(id)arg1 endDate:(id)arg2 emailAddresses:(id)arg3;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (long long)responseStatusForExchangeStatus:(int)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;

@end
