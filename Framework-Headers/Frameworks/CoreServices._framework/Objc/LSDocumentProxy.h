//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSResourceProxy.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding>
{
    CDStruct_4c969caf _sourceAuditToken;
    BOOL _isContentManaged;
    NSURL *_URL;
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

@property (readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) NSString *containerOwnerApplicationIdentifier;
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged; // @synthesize contentManaged=_isContentManaged;
@property (readonly, getter=isImageOrVideo) BOOL imageOrVideo;
@property (readonly, nonatomic) const CDStruct_4c969caf *managedSourceAuditToken;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) const CDStruct_4c969caf *sourceAuditToken; // @dynamic sourceAuditToken;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (readonly, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const CDStruct_4c969caf *)arg4;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(BOOL)arg4;
+ (id)documentProxyForURL:(id)arg1;
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(BOOL)arg2 sourceAuditToken:(const CDStruct_4c969caf *)arg3;
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const CDStruct_4c969caf *)arg2;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (optional_4acbcc83)_bindingEvaluatorWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (id)_boundIconInfo;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id *)arg1;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id *)arg1;
- (id)applicationsAvailableForOpeningWithError:(id *)arg1;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id *)arg2;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id *)arg4;
- (id)applicationsOrClaimBindings:(BOOL)arg1 availableForOpeningWithStyle:(unsigned char)arg2 handlerRank:(id)arg3 limit:(unsigned long long)arg4 XPCConnection:(id)arg5 error:(id *)arg6;
- (id)availableClaimBindingsForMode:(unsigned char)arg1 error:(id *)arg2;
- (id)availableClaimBindingsForMode:(unsigned char)arg1 handlerRank:(id)arg2 error:(id *)arg3;
- (id)availableClaimBindingsReturningError:(id *)arg1;
- (id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 error:(id *)arg5;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(BOOL)arg5 sourceAuditToken:(const CDStruct_4c969caf *)arg6;
- (id)uniqueIdentifier;

@end
