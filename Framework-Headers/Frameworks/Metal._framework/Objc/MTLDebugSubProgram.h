//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, NSString;

__attribute__((visibility("hidden")))
@interface MTLDebugSubProgram : NSObject
{
    MTLDebugInstrumentationData *_data;
    struct DebugSubProgram *_debugSubProgram;
}

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned int line;
@property (readonly, nonatomic) NSString *name;

- (oneway void)release;
- (oneway void)releaseInternal;
- (id)retain;

@end

