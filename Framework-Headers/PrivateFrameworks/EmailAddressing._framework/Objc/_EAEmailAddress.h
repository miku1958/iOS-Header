//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EAEmailAddress : NSObject
{
    NSString *_emailAddress;
}

@property (readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly, copy, nonatomic) NSString *rawAddress;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEmailAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
