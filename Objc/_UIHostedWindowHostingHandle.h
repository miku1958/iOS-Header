//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>
{
    int _pid;
    unsigned int _contextID;
    struct CGAffineTransform _rootLayerTransform;
    struct CGRect _rootLayerFrame;
}

@property (readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic) struct CGRect rootLayerFrame; // @synthesize rootLayerFrame=_rootLayerFrame;
@property (readonly, nonatomic) struct CGAffineTransform rootLayerTransform; // @synthesize rootLayerTransform=_rootLayerTransform;

+ (id)hostedWindowHostingHandleWithContextID:(unsigned int)arg1 rootLayerTransform:(struct CGAffineTransform)arg2 rootLayerFrame:(struct CGRect)arg3;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

