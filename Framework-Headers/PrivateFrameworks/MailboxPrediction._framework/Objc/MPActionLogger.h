//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPActionLogging-Protocol.h>

@class NSString;

@interface MPActionLogger : NSObject <MPActionLogging>
{
    NSString *_modelName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithModelName:(id)arg1;
- (void)logKeySet:(id)arg1;
- (void)logUserAction:(unsigned long long)arg1 inContext:(unsigned long long)arg2 forMessage:(id)arg3 available:(id)arg4 displayed:(id)arg5 selected:(id)arg6;

@end

