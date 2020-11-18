//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKInternetDateFetching-Protocol.h>

@class NSDate, NSMutableArray, NSString;
@protocol CRKInternetDateFetching;

@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching>
{
    id<CRKInternetDateFetching> _dateFetchingProvider;
    NSDate *_internetDateAndTime;
    double _uptimeAtInternetDateAndTimeFetch;
    NSMutableArray *_completionQueue;
}

@property (strong, nonatomic) NSMutableArray *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (strong, nonatomic) id<CRKInternetDateFetching> dateFetchingProvider; // @synthesize dateFetchingProvider=_dateFetchingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *internetDateAndTime; // @synthesize internetDateAndTime=_internetDateAndTime;
@property (readonly) Class superclass;
@property (nonatomic) double uptimeAtInternetDateAndTimeFetch; // @synthesize uptimeAtInternetDateAndTimeFetch=_uptimeAtInternetDateAndTimeFetch;

+ (id)sharedProvider;
- (void).cxx_destruct;
- (id)fetchExistingInternetDate;
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

