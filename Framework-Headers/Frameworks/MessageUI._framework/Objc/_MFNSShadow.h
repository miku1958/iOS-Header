//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding>
{
    NSShadow *_shadow;
}

@property (strong, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;

@end

