//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUAccessGrant : RBSGrant
{
    unsigned char _role;
}

@property (readonly, nonatomic) unsigned char role; // @synthesize role=_role;

+ (id)grant;
+ (id)grantUserInitiated;
+ (id)grantWithRole:(unsigned char)arg1;
+ (id)grantWithUserInteractivity;
+ (id)grantWithUserInteractivityAndFocus;
- (id)_initWithRole:(unsigned char)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
