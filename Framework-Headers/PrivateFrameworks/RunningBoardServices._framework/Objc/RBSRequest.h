//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSRequest : NSObject <BSXPCSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsBSXPCSecureCoding;
- (id)_init;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;

@end
