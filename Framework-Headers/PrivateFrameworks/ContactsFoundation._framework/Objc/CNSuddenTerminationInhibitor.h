//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSProcessInfo;

@interface CNSuddenTerminationInhibitor : NSObject
{
    NSProcessInfo *_processInfo;
}

@property (strong, nonatomic) NSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithProcessInfo:(id)arg1;

@end
