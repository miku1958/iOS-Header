//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSSecureCoding-Protocol.h>

@class NSString;

@interface STGenericIntentGroup : NSObject <NSSecureCoding>
{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

