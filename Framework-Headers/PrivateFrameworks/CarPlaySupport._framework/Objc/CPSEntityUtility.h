//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSession, CARSessionStatus;

@interface CPSEntityUtility : NSObject
{
    CARSessionStatus *_sessionStatus;
}

@property (readonly, nonatomic) CARSession *currentSession;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (strong, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;

@end

