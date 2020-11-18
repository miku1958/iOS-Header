//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BRTask : NSObject
{
    NSArray *_argv;
    NSString *_redirectStdoutToFileAtPath;
    int _redirectStdoutToFileDescriptor;
    NSString *_redirectStderrToFileAtPath;
    int _redirectStderrToFileDescriptor;
    int _waitStatus;
}

@property (strong, nonatomic) NSArray *argv; // @synthesize argv=_argv;
@property (strong, nonatomic) NSString *redirectStderrToFileAtPath; // @synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor; // @synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor;
@property (strong, nonatomic) NSString *redirectStdoutToFileAtPath; // @synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor; // @synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor;
@property (readonly, nonatomic) int waitStatus; // @synthesize waitStatus=_waitStatus;

+ (id)sanitizeStringForFilename:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
+ (id)taskWithCommandWithArguments:(id)arg1;
- (void).cxx_destruct;
- (int)exec;
- (id)init;
- (void)resetRedirect;
- (void)setCommand:(id)arg1;
- (void)setCommandWithArguments:(id)arg1;

@end
