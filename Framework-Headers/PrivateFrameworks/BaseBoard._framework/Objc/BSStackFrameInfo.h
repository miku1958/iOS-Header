//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSStackFrameInfo : NSObject
{
    NSString *_realFunctionName;
    unsigned long long _address;
    NSString *_functionName;
    NSString *_executablePath;
    NSString *_className;
}

@property (readonly, nonatomic) unsigned long long address; // @synthesize address=_address;
@property (readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property (readonly, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;

- (void).cxx_destruct;
- (id)description;

@end
