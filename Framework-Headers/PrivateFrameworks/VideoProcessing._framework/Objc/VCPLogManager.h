//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPLogManager : NSObject
{
    int _logLevel;
}

@property (readonly) int logLevel; // @synthesize logLevel=_logLevel;

+ (id)dateFormatter;
+ (id)sharedLogManager;
- (id)init;

@end

