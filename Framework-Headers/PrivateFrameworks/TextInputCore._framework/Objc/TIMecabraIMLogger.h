//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface TIMecabraIMLogger : NSObject
{
    NSMutableString *_loggedMessage;
}

@property (strong, nonatomic) NSMutableString *loggedMessage; // @synthesize loggedMessage=_loggedMessage;

+ (BOOL)isLoggingEnabled;
- (void)beginLogging;
- (void)dealloc;
- (void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2;
- (id)logFilePath;
- (void)markTime:(unsigned long long)arg1;
- (void)writeLogToFile;

@end
