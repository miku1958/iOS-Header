//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPButton.h>

@class NSString;

@interface CPContactMessageButton : CPButton
{
    NSString *_phoneOrEmail;
}

@property (readonly, copy, nonatomic) NSString *phoneOrEmail; // @synthesize phoneOrEmail=_phoneOrEmail;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneOrEmail:(id)arg1;

@end

