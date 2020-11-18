//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@interface _MSPresentationState : NSObject <NSSecureCoding>
{
    unsigned long long _presentationStyle;
    unsigned long long _presentationContext;
}

@property (readonly, nonatomic) unsigned long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property (nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;

+ (BOOL)isRunningInCameraContext;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

