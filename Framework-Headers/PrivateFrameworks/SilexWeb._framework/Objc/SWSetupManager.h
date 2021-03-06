//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWSetupManager-Protocol.h>

@class NSMutableOrderedSet, NSString;
@protocol SWLogger;

@interface SWSetupManager : NSObject <SWSetupManager>
{
    id<SWLogger> _logger;
    NSMutableOrderedSet *_tasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SWLogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableOrderedSet *tasks; // @synthesize tasks=_tasks;

- (void).cxx_destruct;
- (void)addTask:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (void)performTasks;

@end

