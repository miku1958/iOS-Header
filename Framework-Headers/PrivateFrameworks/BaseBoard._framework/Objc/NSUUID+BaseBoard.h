//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

#import <BaseBoard/BSXPCSecureCoding-Protocol.h>

@class NSString;

@interface NSUUID (BaseBoard) <BSXPCSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
@end

