//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject
{
    id<AMSBagProtocol> _bag;
    AMSPushConfiguration *_configuration;
    id<AMSPushHandlerContract> _bagContract;
}

@property (readonly, nonatomic) id<AMSBagProtocol> bag; // @synthesize bag=_bag;
@property (readonly, nonatomic) id<AMSPushHandlerContract> bagContract; // @synthesize bagContract=_bagContract;
@property (readonly, nonatomic) AMSPushConfiguration *configuration; // @synthesize configuration=_configuration;

- (void).cxx_destruct;
- (id)_enabledParsables;
- (void)handleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;
- (BOOL)shouldHandleNotification:(id)arg1;

@end
