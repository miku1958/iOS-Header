//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject
{
    DACoreDAVLogger *_curLogger;
}

@property (strong, nonatomic) DACoreDAVLogger *curLogger; // @synthesize curLogger=_curLogger;

+ (id)instance;
- (void).cxx_destruct;
- (BOOL)enabled;
- (void)finishSnippets;
- (id)init;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (void)logStringWithFormat:(id)arg1;

@end

