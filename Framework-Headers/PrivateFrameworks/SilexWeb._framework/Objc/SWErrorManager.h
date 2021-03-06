//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWErrorProvider-Protocol.h>
#import <SilexWeb/SWErrorReporting-Protocol.h>
#import <SilexWeb/SWMessageHandler-Protocol.h>

@class NSError, NSString;
@protocol SWLogger;

@interface SWErrorManager : NSObject <SWMessageHandler, SWErrorProvider, SWErrorReporting>
{
    NSError *_error;
    CDUnknownBlockType _block;
    id<SWLogger> _logger;
}

@property (copy, nonatomic, setter=onError:) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SWLogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithMessageHandlerManager:(id)arg1 timeoutManager:(id)arg2 logger:(id)arg3;
- (void)reportError:(id)arg1;

@end

