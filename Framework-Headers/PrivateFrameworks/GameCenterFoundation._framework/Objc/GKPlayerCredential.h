//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKPlayerCredential : GKInternalRepresentation
{
    NSString *_accountName;
    NSString *_authenticationToken;
    GKPlayerInternal *_playerInternal;
    long long _environment;
    unsigned int _scope;
    NSDate *_scopeModificationDate;
    NSString *_altDSID;
    NSString *_DSID;
    NSString *_rawPassword;
}

@property (strong) NSString *DSID; // @synthesize DSID=_DSID;
@property (strong) NSString *accountName; // @synthesize accountName=_accountName;
@property (strong) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (strong) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property long long environment; // @synthesize environment=_environment;
@property (strong) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
@property (strong) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property unsigned int scope; // @synthesize scope=_scope;
@property (readonly) NSString *scopeAsString;
@property (strong) NSDate *scopeModificationDate; // @synthesize scopeModificationDate=_scopeModificationDate;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
