//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction
{
    ECMessageFlagChange *_flagChange;
}

@property (readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2;
- (long long)signpostType;

@end

