//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    BSMutableSettings *_settings;
}

@property (nonatomic, getter=shouldAvoidHitTesting) BOOL avoidHitTesting;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (strong, nonatomic) BSMutableSettings *settings; // @synthesize settings=_settings;

+ (void)inspectChangesWithOldPolicy:(id)arg1 newPolicy:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

