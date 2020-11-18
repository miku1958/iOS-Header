//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _HKWorkoutSession;
@protocol HDServer;

@interface _HDWorkoutData : NSObject
{
    BOOL _isFirstParty;
    _HKWorkoutSession *_workoutSession;
    NSString *_clientIdentifier;
    id<HDServer> _server;
}

@property (strong, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (nonatomic) BOOL isFirstParty; // @synthesize isFirstParty=_isFirstParty;
@property (weak, nonatomic) id<HDServer> server; // @synthesize server=_server;
@property (strong, nonatomic) _HKWorkoutSession *workoutSession; // @synthesize workoutSession=_workoutSession;

- (void).cxx_destruct;
- (void)deliverChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3;
- (void)deliverError:(id)arg1;
- (id)initWithWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4;

@end

