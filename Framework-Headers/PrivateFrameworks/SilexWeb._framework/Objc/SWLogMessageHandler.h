//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>

@class NSString;
@protocol SWLogger;

@interface SWLogMessageHandler : NSObject <SWMessageHandler>
{
    id<SWLogger> _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SWLogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithLogger:(id)arg1;

@end

