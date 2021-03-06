//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject
{
    FBSServiceFacility *_facility;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) FBSServiceFacility *facility; // @synthesize facility=_facility;

+ (id)pendingConnectionToFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

