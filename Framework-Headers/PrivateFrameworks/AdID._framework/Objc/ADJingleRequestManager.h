//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton
{
    BOOL _jingleRequestInProgress;
    NSMutableDictionary *_pendingJingleRequests;
}

@property BOOL jingleRequestInProgress; // @synthesize jingleRequestInProgress=_jingleRequestInProgress;
@property (strong, nonatomic) NSMutableDictionary *pendingJingleRequests; // @synthesize pendingJingleRequests=_pendingJingleRequests;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)authenticateUser:(CDUnknownBlockType)arg1;
- (BOOL)canMakeJingleRequest;
- (id)init;
- (void)jingleRequestCompleted:(id)arg1;
- (id)makeOptOutRequest:(id)arg1 status:(BOOL)arg2 timestamp:(double)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)makeSegmentRequest:(id)arg1 forceSegments:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startJingleRequest:(id)arg1;

@end

