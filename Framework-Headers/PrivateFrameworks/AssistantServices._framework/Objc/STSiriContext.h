//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface STSiriContext : NSObject <NSSecureCoding>
{
    NSArray *_modelObjects;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_aceValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObjects:(id)arg1;
- (id)modelObjects;

@end

