//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation
{
    NSString *_humanReadableDescription;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property (strong, nonatomic) NSString *humanReadableDescription; // @synthesize humanReadableDescription=_humanReadableDescription;

- (void).cxx_destruct;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)init;
- (void)main;

@end

