//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRProtocolMessageLogger : NSObject
{
    BOOL _shouldLog;
}

@property (nonatomic) BOOL shouldLog; // @synthesize shouldLog=_shouldLog;

+ (id)sharedLogger;
- (id)init;
- (void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3;

@end
