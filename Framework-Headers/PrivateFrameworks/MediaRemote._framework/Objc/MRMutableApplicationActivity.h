//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRApplicationActivity.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>
{
}

@property (copy, nonatomic) NSString *primaryApplicationDisplayID; // @dynamic primaryApplicationDisplayID;
@property (copy, nonatomic) NSString *secondaryApplicationDisplayID; // @dynamic secondaryApplicationDisplayID;
@property (nonatomic) int status; // @dynamic status;

+ (BOOL)supportsSecureCoding;

@end

