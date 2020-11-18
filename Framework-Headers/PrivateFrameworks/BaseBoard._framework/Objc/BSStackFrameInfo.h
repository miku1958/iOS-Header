//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BSStackFrameInfo : NSObject
{
    unsigned long long _address;
    NSString *_functionName;
    NSString *_className;
    NSString *_executablePath;
    NSString *_realFunctionName;
}

@property (readonly, nonatomic) unsigned long long address; // @synthesize address=_address;
@property (readonly, strong, nonatomic) NSString *className; // @synthesize className=_className;
@property (readonly, strong, nonatomic) NSString *executableName;
@property (readonly, strong, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property (readonly, strong, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;

- (void)dealloc;
- (id)description;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end

