//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSRequest : NSObject <RBSXPCSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsRBSXPCSecureCoding;
- (id)_init;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;

@end
