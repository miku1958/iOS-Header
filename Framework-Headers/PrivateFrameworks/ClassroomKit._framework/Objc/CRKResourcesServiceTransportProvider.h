//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSString;

@interface CRKResourcesServiceTransportProvider : NSObject <CRKTransportProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;

@end

