//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    struct SWCPatternStorage _storage[0];
}

@property (readonly) unsigned long long count;

+ (id)patternListWithArray:(id)arg1;
+ (id)patternListWithDetailsDictionary:(id)arg1;
+ (id)patternListWithDetailsDictionary:(id)arg1 defaults:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePatternsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const CDStruct_6ad76789 *)arg3 matchingPattern:(id *)arg4 index:(unsigned long long *)arg5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end

