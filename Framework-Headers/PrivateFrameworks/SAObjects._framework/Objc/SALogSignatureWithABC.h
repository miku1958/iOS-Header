//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString;

@interface SALogSignatureWithABC : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSDictionary *subTypeContext;

+ (id)logSignatureWithABC;
+ (id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

