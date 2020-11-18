//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray, NSString;

@interface DMFSetDeclarationsRequest : CATTaskRequest
{
    NSString *_organizationIdentifier;
    NSString *_syncToken;
    NSArray *_declarations;
}

@property (copy, nonatomic) NSArray *declarations; // @synthesize declarations=_declarations;
@property (copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property (copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

