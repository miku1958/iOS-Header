//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol TUTelephonySubscription <NSObject>

@property (readonly, nonatomic) NSString *labelID;
@property (readonly, nonatomic) NSUUID *uuid;

- (id)initWithUUID:(NSUUID *)arg1;
@end

