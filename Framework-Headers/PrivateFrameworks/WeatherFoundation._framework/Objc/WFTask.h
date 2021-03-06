//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, WFTaskIdentifier;

@interface WFTask : NSObject
{
    BOOL _requiresResponse;
    WFTaskIdentifier *_identifier;
    NSProgress *_progress;
}

@property (readonly, nonatomic) WFTaskIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isCancelled;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) BOOL requiresResponse; // @synthesize requiresResponse=_requiresResponse;

+ (id)sharedServiceConnection;
- (void).cxx_destruct;
- (void)cancel;
- (void)cleanup;
- (void)executeSynchronously;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)init;
- (id)initWithResponseRequired:(BOOL)arg1;
- (void)start;
- (void)startWithService:(id)arg1;

@end

