//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKRequestPerformingProtocol-Protocol.h>

@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol>
{
    CATTaskClient *_taskClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;

- (void).cxx_destruct;
- (id)initWithTaskClient:(id)arg1;
- (id)operationForRequest:(id)arg1;

@end
