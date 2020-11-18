//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

#import <BaseBoard/NSCopying-Protocol.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
{
}

+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;
- (id)_initWithCopyOfPort:(unsigned int)arg1 previousTrace:(id)arg2;
- (id)_initWithPort:(unsigned int)arg1 previousTrace:(id)arg2;
- (BOOL)_queue_isUsable;
- (BOOL)_shouldInvalidateOnEncode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(BOOL)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)sendRight;

@end
