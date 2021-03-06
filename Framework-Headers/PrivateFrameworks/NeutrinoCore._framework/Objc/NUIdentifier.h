//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>
{
    NSString *_nameSpace;
    NSString *_name;
    NUVersion *_version;
}

@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
@property (readonly) NSString *stringRepresentation;
@property (readonly) NUVersion *version; // @synthesize version=_version;

+ (id)defaultNameSpace;
+ (id)identifierRegularExpression;
+ (id)identifierWithString:(id)arg1 error:(out id *)arg2;
+ (id)latestIdentifierWithName:(id)arg1;
+ (id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2;
+ (id)validNameRegularExpression;
+ (id)validNameSpaceRegularExpression;
+ (BOOL)validateIdentifierString:(id)arg1 error:(out id *)arg2;
+ (BOOL)validateIdentifierString:(id)arg1 space:(out id *)arg2 name:(out id *)arg3 version:(out id *)arg4 error:(out id *)arg5;
+ (BOOL)validateName:(id)arg1 error:(out id *)arg2;
+ (BOOL)validateNameSpace:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifierWithVersion:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIdentifier:(id)arg1;

@end

