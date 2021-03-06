//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AceObject, NSString;
@protocol NSCopying, SAAceCommand, SVXTaskTracking;

@protocol SVXServiceCommandHandling <NSObject>

@property (readonly, nonatomic) NSString *identifier;

+ (Class)supportedCommandClass;
- (void)handleCommand:(AceObject<SAAceCommand> *)arg1 withContext:(id<NSCopying>)arg2 taskTracker:(id<SVXTaskTracking>)arg3 completion:(void (^)(SVXServiceCommandResult *))arg4;
- (BOOL)isCommandUUFR:(AceObject<SAAceCommand> *)arg1;

@optional
- (void)prepareToHandleCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(BOOL, id<NSCopying>))arg2;
- (BOOL)shouldDependOnCommand:(AceObject<SAAceCommand> *)arg1;
@end

