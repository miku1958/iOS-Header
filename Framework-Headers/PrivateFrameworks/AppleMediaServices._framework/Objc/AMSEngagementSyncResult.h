//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AMSEngagementSyncResult : NSObject <NSSecureCoding>
{
    NSArray *_actions;
}

@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;

+ (id)archiveClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
