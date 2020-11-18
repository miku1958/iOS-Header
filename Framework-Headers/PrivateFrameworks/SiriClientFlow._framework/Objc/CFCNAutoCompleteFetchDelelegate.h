//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriClientFlow/CNAutocompleteFetchDelegate-Protocol.h>

@class AFWatchdogTimer, NSMutableArray, NSString;
@protocol CNCancelable;

@interface CFCNAutoCompleteFetchDelelegate : NSObject <CNAutocompleteFetchDelegate>
{
    CDUnknownBlockType _serviceHelperCompletion;
    id<CNCancelable> _fetchCancelable;
    NSMutableArray *_results;
    AFWatchdogTimer *_watchDogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<CNCancelable> fetchCancelable; // @synthesize fetchCancelable=_fetchCancelable;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableArray *results; // @synthesize results=_results;
@property (copy) CDUnknownBlockType serviceHelperCompletion; // @synthesize serviceHelperCompletion=_serviceHelperCompletion;
@property (readonly) Class superclass;
@property (strong) AFWatchdogTimer *watchDogTimer; // @synthesize watchDogTimer=_watchDogTimer;

+ (id)sharedDelegateWithServiceHelperCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)autoCompleteResultAdddressTypeForResultValue:(id)arg1;
- (id)autoCompleteSourceTypeForResult:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)init;

@end

