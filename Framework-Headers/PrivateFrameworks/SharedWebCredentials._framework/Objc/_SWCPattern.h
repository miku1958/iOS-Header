//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSString;

@interface _SWCPattern : NSObject <SWCRedactedDescription>
{
    BOOL _freeWhenDone;
    const struct SWCPatternStorage *_storage;
}

@property (readonly, getter=isBlocking) BOOL blocking;
@property (readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property (readonly, getter=isPercentEncoded) BOOL percentEncoded;
@property (readonly) NSString *requiredEntitlement;
@property (nonatomic) const struct SWCPatternStorage *storage; // @synthesize storage=_storage;

+ (id)_debug:(BOOL)arg1 descriptionOfStorage:(const struct SWCPatternStorage *)arg2 forObject:(id)arg3 redacted:(BOOL)arg4;
+ (id)_normalizedURLPath:(id)arg1;
+ (id)new;
- (id)_initWithPatternStorageNoCopy:(const struct SWCPatternStorage *)arg1 freeWhenDone:(BOOL)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1 defaults:(id)arg2;
- (id)initWithPathPattern:(id)arg1 defaults:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end

